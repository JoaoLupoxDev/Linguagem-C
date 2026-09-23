#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float media, soma;
    printf("Qual a quantidade de notas da turma: ");
    scanf("%d", &n);
    float *vetor = (float *) malloc(n * sizeof(float)); //criação de um vetor com ponteiro e malloc para float
    if (vetor == NULL){
        return 1;
    }
    for (int i=0;i<n;i++){
        printf("Digite a %dº nota: ", i+1);
        scanf("%f", &vetor[i]);
    }
    for (int i=0;i<n;i++){
        soma += *(vetor + i);
    }
    media = soma/n;
    printf("A media das notas da turma foi de %f", media);
    free(vetor);
    vetor = NULL;
    return 0;
}