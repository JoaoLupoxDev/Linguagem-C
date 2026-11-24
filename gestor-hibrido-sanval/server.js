const express = require('express');
const cors = require('cors');
const fs = require('fs');
const path = require('path');
const PDFDocument = require('pdfkit');

const app = express();
const PORT = 3000;
const PDF_PATH = path.join(__dirname, 'banco_de_dados.pdf');

app.use(cors());
app.use(express.json());
app.use(express.static(path.join(__dirname, 'public')));

// Estado padrão caso o PDF ainda não tenha dados gravados
let dbState = {
    app: "Gestor Híbrido Proativo",
    versao: 1,
    atualizado: new Date().toISOString().slice(0, 19),
    caixa: 1200,
    nid: 10,
    estoque: [
        { n: "Coca-Cola", k: "coca", q: 5, m: 2, p: 6 },
        { n: "Água 500ml", k: "agua", q: 12, m: 4, p: 3 },
        { n: "Pão francês (un.)", k: "pao", q: 30, m: 10, p: 0.8 },
        { n: "Biscoito", k: "bisc", q: 8, m: 3, p: 4.5 }
    ],
    checklist: [
        { id: 1, t: "Boleto Fornecedor Ambev (R$ 200)", done: 0, ty: "boleto" },
        { id: 2, t: "Boleto Energia (R$ 150)", done: 0, ty: "boleto" },
        { id: 3, t: "Cobrar João (R$ 50)", done: 0, ty: "receb" }
    ],
    historico: []
};

// Lê o Base64 do banco_de_dados.pdf sem depender de versão do pdf-parse
async function loadPDF() {
    try {
        if (!fs.existsSync(PDF_PATH)) {
            savePDF();
            console.log("📄 Novo banco_de_dados.pdf criado com dados iniciais.");
            return;
        }

        const dataBuffer = fs.readFileSync(PDF_PATH);
        let rawText = dataBuffer.toString('latin1');

        // Tenta extrair via pdf-parse se estiver disponível (suporta v1 e v2)
        try {
            const pdfLib = require('pdf-parse');
            if (typeof pdfLib === 'function') {
                const parsed = await pdfLib(dataBuffer);
                rawText += "\n" + parsed.text;
            } else if (pdfLib && pdfLib.PDFParse) {
                const parser = new pdfLib.PDFParse({ data: dataBuffer });
                const parsed = await parser.getText();
                rawText += "\n" + parsed.text;
            }
        } catch (_) {
            // Ignora e usa a leitura direta do buffer abaixo
        }

        const regex = /GHP\|(\d{4})\|([A-Za-z0-9+\/=]+)/g;
        const parts = [...rawText.matchAll(regex)].sort((a, b) => Number(a[1]) - Number(b[1]));

        if (parts.length > 0) {
            const b64 = parts.map(m => m[2]).join("");
            const jsonStr = Buffer.from(b64, 'base64').toString('utf-8');
            const loaded = JSON.parse(jsonStr);
            if (loaded && loaded.app === "Gestor Híbrido Proativo") {
                dbState = loaded;
                console.log("✅ banco_de_dados.pdf carregado com sucesso!");
                return;
            }
        }

        console.log("⚠️ Nenhum bloco GHP encontrado no PDF. Gravando estado inicial...");
        savePDF();
    } catch (err) {
        console.log("⚠️ Aviso ao ler PDF (usando dados padrão):", err.message);
        savePDF();
    }
}

// Regrava o banco_de_dados.pdf com visualização humana + dados Base64
function savePDF() {
    const doc = new PDFDocument({ margin: 14, compress: false });
    doc.pipe(fs.createWriteStream(PDF_PATH));

    const atualizado = new Date().toISOString().replace('T', ' ').slice(0, 19);
    dbState.atualizado = atualizado.replace(' ', 'T');

    doc.fontSize(16).text('Gestor Híbrido Proativo - Banco de Dados');
    doc.fontSize(10).text(`Atualizado em: ${atualizado}`);
    doc.text('Este PDF é lido e regravado pelo servidor Node.js. Não edite a seção DADOS.\n\n');

    doc.fontSize(12).text('CAIXA');
    doc.fontSize(10).text(`Saldo: R$ ${Number(dbState.caixa).toFixed(2)}\n\n`);

    doc.fontSize(12).text('ESTOQUE');
    (dbState.estoque || []).forEach(x => {
        doc.fontSize(10).text(`${x.n.padEnd(22)} | Qtd: ${x.q} | Mín: ${x.m} | Preço: R$ ${Number(x.p).toFixed(2)}`);
    });
    doc.text('\n');

    doc.fontSize(12).text('CHECKLIST');
    (dbState.checklist || []).forEach(x => {
        doc.fontSize(10).text(`[${x.done ? 'x' : ' '}] ${x.t} (${x.ty})`);
    });
    doc.text('\n');

    doc.fontSize(12).text('HISTÓRICO');
    const hist = dbState.historico || [];
    if (!hist.length) {
        doc.fontSize(10).text('(sem movimentações registradas)');
    } else {
        hist.slice(-40).forEach(h => {
            doc.fontSize(9).text(`${h.ts.replace('T', ' ')}  ${h.tipo}: ${h.desc}`);
        });
    }

    // Página 2: Dados estruturados em Base64
    doc.addPage();
    doc.fontSize(11).text('DADOS (não editar) - base64 do JSON');
    doc.fontSize(8).text('GHP-DB-BEGIN');

    const jsonStr = JSON.stringify(dbState);
    const b64 = Buffer.from(jsonStr, 'utf-8').toString('base64');

    for (let i = 0, n = 0; i < b64.length; i += 84, n++) {
        doc.text(`GHP|${String(n).padStart(4, '0')}|${b64.slice(i, i + 84)}`);
    }
    doc.text('GHP-DB-END');
    doc.end();
}

// Rotas usadas pelo public/index.html
app.get('/api/state', (req, res) => {
    res.json(dbState);
});

app.post('/api/sync', (req, res) => {
    if (req.body && req.body.app) {
        dbState = req.body;
        savePDF();
        console.log("💾 banco_de_dados.pdf atualizado!");
    }
    res.json({ success: true });
});

app.get('/', (req, res) => {
    res.sendFile(path.join(__dirname, 'public', 'index.html'));
});

app.listen(PORT, async () => {
    await loadPDF();
    console.log(`🚀 Servidor rodando em: http://localhost:${PORT}`);
});