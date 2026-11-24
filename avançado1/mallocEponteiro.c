#include <stdlib.h>
#include <stdio.h>

int *filtrarPares(int *vetor, int tam, int qtdPares){
    int *vetorPares = (int *) malloc(qtdPares * sizeof(int));
    if (vetorPares == NULL){
        return 0;
    }
    int j=0;

    for (int i=0;i<tam;i++){
        if (*(vetor + i) % 2 == 0){
            *(vetorPares + j) = *(vetor + i);
            j++;
        }
    }
    return vetorPares;    
}

int main(){
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int *vetor = (int *) malloc(tam * sizeof(int));
    if (vetor == NULL){
        return 0;
    }
    for (int i=0;i<tam;i++){
        printf("Digite o %d inteiro: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int qtdPares=0;
    for (int i=0;i<tam;i++){
        if (*(vetor + i) % 2 == 0){
            qtdPares++;
        }
    }
    int *vetorPares = filtrarPares(vetor, tam, qtdPares);
    if (vetorPares == NULL){
        return 0;
    }
    puts("Vetor apenas com pares: ");
    for (int i=0;i<qtdPares;i++){
        printf("%d ", *(vetorPares+i));
    }
    
}