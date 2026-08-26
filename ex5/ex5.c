#include <stdio.h>
#include <stdlib.h>

main(){
    char letra;
    printf("Digite uma letra para saber se ela e vogal ou consoante: ");
    letra = getchar();
    switch (letra){
        case 'a':
            printf("E vogal.");
            break;
        case 'e':
            printf("e vogal");
            break;
        case 'i':
            printf("e vogal");
            break;
        case 'o':
            printf("e vogal");
            break;
        case 'u':
            printf("e vogal");
            break;
        default:
            printf("e consoante");
            break;
    };
}