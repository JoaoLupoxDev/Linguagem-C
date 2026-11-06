#include <stdlib.h>
#include <stdio.h>

void alocaEspaco(int num, int *p){
    int *espaco = (int *) malloc(num * sizeof(int));
    p = &espaco;    
}

int main(){
    int *p = NULL;
    int num;
    scanf("%d", num);


    alocaEspaco(num, &p);
    
}