#include <stdlib.h>
#include <stdio.h>

//refazendo a lista encadeada para revisar:

typedef struct No{
    struct No *ant, *prox;
    int valor;
}No;

typedef struct Lista{
    No *cabeca;
}Lista;

Lista *criar_lista(){
    Lista *cabeca;
    return cabeca;
}

void inserir_na_lista(Lista *l, int valor){
    if (l==NULL) return;

    No *novo = malloc(sizeof(No));
    novo->valor = valor;

    if (l->cabeca == NULL){

        l->cabeca = novo;
        l->cabeca->ant = NULL;
        l->cabeca->prox = NULL;

    }

    novo->ant = l->cabeca;
    novo->prox = l->cabeca->prox;
    l->cabeca->prox = novo;
    if (novo->prox != NULL){
        novo->prox->ant = novo; 
    }
}

void remover_da_lista(Lista *l, int valor){

    No *ptr = l->cabeca;

    while (ptr != NULL && ptr->valor != valor){
        ptr = ptr->prox;
    }

    ptr->prox->ant = ptr->ant;
    ptr->ant->prox = ptr->prox;

    free(ptr);
}
