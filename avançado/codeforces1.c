#include <stdlib.h>
#include <stdlib.h>

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int X;
    printf("Digite X: ");
    scanf("%d", &X);

    int soma=0, contX=0, validador=0;
    for (int i=0;i<10;i++){
        if (array[i] % 2 != 0){
            soma += array[i];
            contX++;
        }
        if (contX == X && contX % 2 != 0){
            validador = 1;
            printf("TRUE");
            break;
        }
    }
    if (validador == 0){
        printf("FALSE");
    }
}