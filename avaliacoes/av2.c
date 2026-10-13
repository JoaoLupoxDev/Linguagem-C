#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char retronaNumeros(int num){
    if (num > 999999 || num <= 9999999){
        char retorno[255];
        int numGuardado = num;
        int numlista[7];
        int div1=1000000, div2, i=0;
        while (num != 0 || div1 > 0){
            numGuardado /= div1;
            numlista[i] = numGuardado;
            num %= div1;
            numGuardado = num;
            div1 /= 10;
            i++;
        }
        int cont=0;
        for (int i=0;i<7;i++){
            int validador=1;
            int key=numlista[i];
            cont++;
            for (int c=i;i>-1;i--){
                if (numlista[c] == key){
                    validador=0;
                    break;
                }
            }
            if (validador == 1){
                for (int j=i+1;j<7;j++){
                    if (key == numlista[j]){
                        cont++;
                    }
                }
                printf("%d - %d", key, cont);
            }
            cont=0;
        }
        
    }else{
        printf("O numero é invalido.");
        return;
    }
}


int main(){
    int num;
    printf("Digite um numero inteiro de até 7 digitos: ");
    scanf("%d", &num);

}
