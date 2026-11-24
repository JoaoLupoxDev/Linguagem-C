#include <stdlib.h>
#include <stdio.h>

void alocaEspaco(int **ptr, int tam){ // o **ptr é para a funcao fazer uma copiar de uma variavel q aponta para outro ponteiro
    *ptr = (int*) malloc(tam * sizeof(int)); //aqui acessamos o endereço q o **ptr aponta para alocar memoria lá
}

int main(){
    int *p = NULL;
    int num;
    scanf("%d", &num);

    alocaEspaco(&p, num); //aqui '&num' é usado para passar o endereço de num
    free(p);
}

typedef struct No{
    int info, tam;
    struct No *prox;
    int *vetorAuxiliar; 
}No;

typedef struct Lista{
    No *cabeca;
}Lista;


int main2(){
    Lista *l = malloc(sizeof(Lista));
    No *ptr = l->cabeca;
}

int *pegaValores(Lista *l){

    No *ptr = l->cabeca;
    int somatorio=0;

    while (ptr != NULL){
        somatorio = ptr->info;
        ptr = ptr->prox;
    }

    ptr = l->cabeca; //para reiniciar o ptr para a cabeca, pois ele ficou em null no ultimo while

    int *vetorResultante = malloc(somatorio * sizeof(int));
    if (vetorResultante == NULL){
        return NULL;
    }

    int i=0,j=0;

    while (ptr != NULL){
        vetorResultante[i] = ptr->vetorAuxiliar[i];
        if (i == ptr->info){
            ptr = ptr->prox;
        }
        i++;
    }

    return vetorResultante;
}