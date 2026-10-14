#include <stdlib.h>
#include <stdio.h>

int qtdBuracosEmLetra(char letra){
    int qtd=0;
    if (letra == 'A'){
        qtd = 1;
    }else if (letra == 'B'){
        qtd = 2;
    }else if (letra == 'D'){
        qtd=1;
    }else if (letra == 'O'){
        qtd=1;
    }else if (letra == 'P'){
        qtd=1;
    }else if (letra == 'Q'){
        qtd=1;
    }else if (letra == 'R'){
        qtd=1;
    }else{
        qtd=0;
    }

    return qtd;
}

int qtdBuracosEmTexto(char texto[]){
    int cont=0, i=0;
    while (texto[i] != '\0'){
        cont++;
    }
    int somaBuracos=0;
    for (int i=0;i<cont;i++){
        somaBuracos += qtdBuracosEmLetra(texto[i]);

    }
}

int main(){
    char texto[255];
    printf("Digite um texto para saber quantos buracos tem nele: ");
    gets(texto);
    int res = qtdBuracosEmTexto();
}