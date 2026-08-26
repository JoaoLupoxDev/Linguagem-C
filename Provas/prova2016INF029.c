#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int menu(int *validadorOUlistaNumeros)
{
    int escolha=0;
    int validador=1;
    while (escolha != 2){
        printf("MENU DE OPÇÕES\n");
        printf("1. Verificar se as varetas formam um triangulo\n 2. Sair do menu");
        printf("Digite 1 ou 2 para escolher: ");
        scanf("%d", &escolha);
        if (escolha==1){

        }else if (escolha == 2){
            return validador;
        }
    }
}

int verificaVaretas(float a, float b, float c, float d){

}

int validaEntrada(char *numeros){
    int validador=1;
    int listaNumeros[4];
    for (int i=0;numeros[i]!='\0';i++){
        if (i % 2 == 0 && numeros[i] < 48 || numeros[i] > 57){ //se for menor que 48 ou maior que 57 segundo a tabela ASCII o caracter nao é um numero
            validador = 0;
        }else if (i % 2 != 0 && numeros[i] != '-'){
            validador = 0;
        }
    }
    if (validador == 1){
        for (int i=0;numeros[i]!='\0';i++){
            if (i % 2 == 0){
                if (numeros[i]==48){
                    listaNumeros[i] = 0;
                }if (numeros[i]==49){
                    listaNumeros[i] = 1;
                }if (numeros[i]==50){
                    listaNumeros[i] = 2;
                }if (numeros[i]==51){
                    listaNumeros[i] = 3;
                }if (numeros[i]==52){
                    listaNumeros[i] = 4;
                }if (numeros[i]==53){
                    listaNumeros[i] = 5;
                }if (numeros[i]==54){
                    listaNumeros[i] = 6;
                }if (numeros[i]==55){
                    listaNumeros[i] = 7;
                }if (numeros[i]==56){
                    listaNumeros[i] = 8;
                }if (numeros[i]==57){
                    listaNumeros[i] = 9;
                }
            }
        }
        return listaNumeros;
    }else{
        return validador;
    }
}

int main()
{
    int validadorOUlistaNumeros, validadorMenu;
    char numeros;
    printf("Digite 4 numeros separados por traços: ");
    numeros = getchar(); //numeros agr é uma string
    validadorOUlistaNumeros = validaEntrada(numeros);
    if (validadorOUlistaNumeros == 0){ //validadorOUlistaNumeros recebe 0
        printf("Entrada invalida.");
    }else{ //validadorOUlistaNumeros recebe a lista com os numeros digitados na string
        validadorMenu = menu(validadorOUlistaNumeros);
    }
    
}