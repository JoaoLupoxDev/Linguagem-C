#include <stdlib.h>
#include <stdio.h>

typedef struct No{
    struct No *ant, *prox;
    int valor;
}No;

typedef struct Lista{
    No *cabeca;
}Lista;

typedef struct estruturaAux{
    int quant, tam; // quant = quantidade de elementos, tam = tamanho do vetor auxiliar
    int *vetorAux; //ponteiro q aponta para a estrutura auxiliar
}estruturaAux;

estruturaAux listaPrincipal[10];

int *pegaDados(estruturaAux listaPrincipal[]){

    int vetor[13];
    int somatorio=0;
    int media;

    for (int i=0;i<10;i++){
        for (int j=0;j<listaPrincipal[i].quant;j++){
            somatorio += listaPrincipal[i].vetorAux[j];
            if (j == listaPrincipal[i].quant - 1){
                media = somatorio/listaPrincipal[i].quant;
                for (int k=0;k<)
            }
        }
    }

}

// a lista ja deve vir criada da main;
int insereLista(Lista *l, int valor){ // 0 = nao foi inserido, 1 = foi inserido;

    if (l == NULL) return 0;
    
    No *novo = malloc(sizeof(No));
    if (novo == NULL) return 0;

    novo->valor = valor;

    if (l->cabeca == NULL){
        l->cabeca = novo;
        l->cabeca->ant = NULL;
        l->cabeca->prox = NULL;
    }

    novo->prox = l->cabeca->prox;
    l->cabeca->prox = novo;
    if (novo->prox != NULL){
        novo->prox->ant = novo;
    }

    return 1;
}

int main(){

    for (int i=0;i<)

}
