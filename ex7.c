#include <stdio.h>
#include <stdlib.h>

main(){
	int num;
	
	printf("Digite um número para saber se ele é par ou impar: ");
	scanf("%d", num);
	
	if (num % 2 == 0){
		printf("Este número é par.");
	}else{
		printf("Este número é impar.");
	}
}
