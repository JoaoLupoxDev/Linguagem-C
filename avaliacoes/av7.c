#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int *endereço;
    int cont;
    int tam;
}Celula;

void imprimirIntercalado(Celula vetor[]){
    int tam = strlen(vetor), contador=0;
    for (int i=0;contador!=10;i++){
        printf("%d ", vetor[i].endereço[contador]);
        if (i == 9){
            contador++;
            i=0;
        }
    }
}


int main(){

}