#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// int multiplica(int a, int b){
//     int res = a * b;
//     return res;
// }

// int soma(int a, int b){
//     int res = a + b;
//     return res;
// }

int insere_caractere(char caractere, char vetor[], int tam){
    int validador=0;
    for (int i=0;i<tam;i++){
        if (vetor[i] < 0 || vetor[i] > 126){
            vetor[i] = caractere;
            validador = 1;
            return validador;
        }
    }

    return validador; //1 = inserido e 0 = nao inserido
}

char troca_caractere(char caractere, char vetor[], int tam){
    for (int i=0;i<tam;i++){
        if (vetor[i] > caractere){
            int temp = vetor[i];
            vetor[i] = caractere;
            return temp; //caractere q saiu do vetor; foi trocado
        }
    }
    return '0'; //significa q nao foi trocado
}

int remove_caractere(char vetor[], int tam){
    vetor[tam-1] = '\0';
    return tam-1;
}

void listar_caracteres(char vetor[], int tam){
    printf("LISTAGEM DOS CARACTERES: \n");
    for (int i=0;i<tam;i++){
        printf("%c ", vetor[i]);
    }
}

int main(){
    // int a,b,c,d;
    // printf("Digite os valores de a, b, c e d: ");
    // scanf("%d %d %d %d", &a, &b, &c, &d);
    // int res1 = multiplica(a,b);
    // int res2 = multiplica(c,d);
    // int somar = soma(res1, res2);
    // printf("o resultado da soma foi: %d", somar);
    int TAM=10;
    char caracteres[TAM];
    char c;
    printf("Digite o caractere: ");
    gets(c);
}
