#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = NULL;
    *p = (int *) malloc(sizeof(int));
    if (p == NULL){
        return 1;
    }
    *p = 4;
    printf("%d", p);
    free(p);
    p = NULL;
}