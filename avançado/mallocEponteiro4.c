#include <stdlib.h>
#include <stdio.h>

void inverterVetor(int tamanho, int vetor[]) {
    for (int i = 0; i < tamanho / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main(){
    int n;
    printf("Digite o tamanho da entrada do vetor: ");
    scanf("%d", &n);
    int *vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL){
        return 0;
    }
    for (int i=0;i<n;i++){
        printf("Digite o %d inteiro: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d ", vetor[i]);
    }
    inverterVetor(n, vetor);
    puts("\n");
    for (int i=0;i<n;i++){
        printf("%d ", vetor[i]);
    }
    free(vetor);
    vetor = NULL;
}