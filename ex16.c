#include <stdio.h>
#include <stdlib.h>

main(){
	int num,cont;
	
	printf("Digite um numero inteiro:");
	scanf("%d", &num);
	cont = num - 1;
	
	do{
		if (num % cont == 0){
			printf("Este numero nao eh inteiro.");
			break;
		}
		if (cont == 2){
			printf("Este numero eh inteiro.");
		}
		cont -= 1;
	}
	while (cont > 1);
	
}
