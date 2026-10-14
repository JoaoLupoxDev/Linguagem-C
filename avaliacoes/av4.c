#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int validaEntrada(char entrada[]){
    int i=0, cont=0, validador=1;
    while (entrada[i] != '\0'){
        cont++;
    }
    if (cont != 7){
        return 0;
    }
    for (int i=0;i<cont;i++){
        if ((i % 2 == 0) && (entrada[i] > 57 || entrada[i] < 48)){
            validador = 0;
            return validador;
        }
        if ((i % 2 != 0) && entrada[i] != '-'){
            validador = 0;
            return validador;
        }
    }
}

int verificaVaretas(int v1, int v2, int v3, int v4){
    bool res1, res2, res3;
    res1 = v1 < v2 + v3;
    res2 = v2 < v1 + v3;
    res3 = v3 < v1 + v2;
    if (res1 == true && res2 == true && res3 == true){
        int varetasR[3] = {v1,v2,v3};
        return varetasR;
    }

    res1 = v4 < v3 + v2;
    res2 = v3 < v4 + v2;
    res3 = v2 < v4 + v3;
    if (res1 == true && res2 == true && res3 == true){
        int varetasR[3] = {v4,v3,v2};
        return varetasR;
    }

    res1 = v4 < v1 + v2;
    res2 = v1 < v4 + v2;
    res3 = v2 < v4 + v1;
    if (res1 == true && res2 == true && res3 == true){
        int varetasR[3] = {v4,v1,v2};
        return varetasR;
    }

    res1 = v4 < v1 + v3;
    res2 = v1 < v4 + v3;
    res3 = v3 < v4 + v3;
    if (res1 == true && res2 == true && res3 == true){
        int varetasR[3] = {v4,v1,v3};
        return varetasR;
    }

    int varetasR[3] = {0,0,0};
    return varetasR;
}

void menu(){
    int opcao;
    while (opcao != 3){
        printf("1. verificar varetas");
        printf("2. imprimir tres varetas que forma triangulo");
        printf("3. sair do menu");
        printf("digite uma das 3 opcoes: ");
        scanf("%d", &opcao);
        if (opcao == 1){
            char varetas[7];
            printf("Digite o tamanho das 4 varetas separadas por traços (ex.: '1-2-3-4')");
            gets(varetas);
            int res = validaEntrada(varetas);
            if (res == 1){
                int v1,v2,v3,v4;
                printf("digite o tamanho das varetas novamente: ");
                scanf("%d %d %d %d", &v1, &v2, &v3, &v4);
                int resv[3] = verificaVaretas(v1, v2, v3, v4);
            }else if( res == 0){
                printf("entrada invalida, tente novamente.");
            }
        }else if (opcao == 2){

        }else if (opcao == 3){

        }else{
            printf("digite apenas uma das 3 opcoes.");
        }
    }
}


int main(){
    menu();
}