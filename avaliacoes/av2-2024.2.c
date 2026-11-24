#include <stdlib.h>
#include <stdio.h>

typedef struct No1{
    int j;
    int k[3];
}No;

int *criarVetor(int x){
    No *vet = malloc(x * sizeof(No));
    if (vet == NULL) return 0;

    int *x_incrementado = &x;

    *x_incrementado += 1;

    return x_incrementado;
}