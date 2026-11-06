#include <stdlib.h>
#include <stdio.h>

typedef struct list {
    struct list *ant;
    int valor;
    struct list *prox;
}Lista; 

int main(){

    Lista *lista;
    lista = NULL;
    Lista *novo;
    novo = (Lista*) malloc(sizeof(Lista));
    novo->valor = 10;
    novo->ant = NULL;
    novo->prox = lista;
    lista = novo;

}
