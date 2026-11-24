#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct No{
	struct No *esq, *dir, *p; //p = parent (pai ou mae)
	int chave;	
}No;

typedef struct Arvore{
	No *raiz;
}Arvore;

No *criarNo(int chave){
	No *novo = malloc(sizeof(No));
	if (novo == NULL) return;
	novo->chave = chave;
	novo->p = NULL;
	novo->esq = NULL;
	novo->dir = NULL;
	return novo;
}

Arvore *criarArvore(){ //ao criar uma arvore a raiz deve ser null pois nao há nenhum elemento
	Arvore *arvoreNatal = malloc(sizeof(Arvore));
	arvoreNatal->raiz = NULL;
	return arvoreNatal;
}

void inserir(Arvore *arvore, No *novo){
	if (arvore->raiz == NULL){
		arvore->raiz = novo;
	}else{
		No *x = arvore->raiz;
		No *p;
		while (x != NULL){
			p = x;
			if (novo->chave > x->chave){
				x = x->esq;
			}else{
				x = x->dir;
			}
			if (novo->chave < p->chave){
				p->esq = novo;
			}else{
				p->dir = novo;
			}
			novo->p = novo;
		}
	}
}
void caminharEmOrdem(No *no){
	if (no != NULL){
		caminharEmOrdem(no->esq);
		printf(" %d ", no->chave);
		caminhar(no->dir);
	}
}