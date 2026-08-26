#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    int cont;

    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    cont = num;
    cont -= 1;

    
    while (cont > 1){
        if (num % cont == 0){
            printf("Este numero nao eh primo.");
            break;
        }
        if (cont == 2){
            printf("Este numero eh primo");
        }    
        cont -= 1;
    }
}
