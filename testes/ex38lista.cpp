// ex 38 lista:
#include <stdio.h>
#include <stdlib.h>
main(){
	int ano;
	printf("Digite um ano:");
	scanf("%d", &ano);
	if (ano % 4 == 0 && ano % 100 != 0){
		printf("O ano digitado eh bissexto.");		
	}else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 != 0){
		printf("Este ano nao eh bissexto.");
	}else if(ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
			printf("O ano digitado eh bissexto.");
	}else if (ano % 4 != 0){
		printf("\nO ano %d nao eh bissexto.", ano);
	}
}
