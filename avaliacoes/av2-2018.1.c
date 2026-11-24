#include <stdlib.h>
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

// Estrutura padrão do Trabalho 2 (vetor principal de 10 posições)
typedef struct {
    int *elementos; // Ponteiro para o vetor dinâmico
    int tam;    // Capacidade total alocada
    int qtd;        // Quantidade de posições efetivamente preenchidas
} Posicao;

// Estrutura do nó da lista encadeada
typedef struct No {
    int valor;
    struct No *prox;
} No;

typedef struct Lista{
    No *cabeca;
}Lista;

// Função auxiliar para inserir um valor de forma ordenada (crescente) na lista
void inserirOrdenado(Lista *l, int valor){

    No *novo = malloc(sizeof(No));
    if (novo == NULL) return;

    novo->valor = valor;

    if (l->cabeca == NULL || l->cabeca->valor > novo->valor){
    
        novo->prox = l->cabeca;
        l->cabeca = novo;
    
    }else{
        No *atual = l->cabeca;

        while (atual->prox != NULL && atual->prox->valor < novo->valor){
            atual = atual->prox;
        }

        novo->prox = atual->prox;
        atual->prox = novo;
    }

}