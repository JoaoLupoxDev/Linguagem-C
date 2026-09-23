#include <stdio.h>
#include <stdlib.h>

int trocar(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
    
int main(){
    int a=1, b=12;
    printf("%d %d", a, b);
    trocar(&a, &b);
    printf("\n%d %d", a, b);
}
