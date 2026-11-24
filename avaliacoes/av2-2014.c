#include <stdlib.h>
#include <stdio.h>

typedef struct No{
    struct No *prox;
    int valor;
}No;

typedef struct Lista{
    No *cabeca;
}Lista;

int inserir(Lista *l){
    int valor;
    printf("Digite o valor a ser inserido na lista encadeada simples: ");
    scanf("%d", &valor);

    if (l==NULL){
        return 0;
    }

    No *novo = malloc(sizeof(No));
    if (novo == NULL){
        return 0;
    }

    if (l->cabeca == NULL){
        
        l->cabeca = novo;
        l->cabeca->prox = NULL;

    }

    No *ptr = l->cabeca;

    while (ptr->prox != NULL){
        ptr = ptr->prox;
    }

    ptr->prox = novo;
    novo->prox = NULL;

    return 1;

}

int inserirElementoOrdenado(Lista *l){
    int valor;

    printf("Digite o elemento que deseja inserir de modo ordenado: ");
    scanf("%d", &valor);

    if (l==NULL) return 0;

    No *novo = malloc(sizeof(No));
    if (novo == NULL){
        return 0;
    }
    novo->valor = valor;

    if (l->cabeca == NULL){
        l->cabeca = novo;
        l->cabeca->prox = NULL;
    }

    if (l->cabeca->valor > novo->valor){
        
    }

    No *ptr = l->cabeca;

    while (ptr->prox->valor <= novo->valor){
        ptr = ptr->prox;
    }

    novo->prox = ptr->prox;
    ptr->prox = novo;

    return 1;
}

int removerElemento(Lista *l){
    int valor;
    printf("Digite o elemento que deseja remover da lista: ");
    scanf("%d", &valor);

    No *ptr = l->cabeca;

    if (ptr == NULL){
        return 0;
    }

    while (ptr->prox != NULL && ptr->prox->valor != valor){
        ptr = ptr->prox;
    }

    if (ptr->prox == NULL){
        return 0;
    }else{
        ptr->prox = ptr->prox->prox;
        free(ptr->prox);

        return 1;
    }
}

void duplicarElementos(Lista *l){
    
}

int main(){

}