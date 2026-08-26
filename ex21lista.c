//ex 21 lista:
#include <stdio.h>
#include <stdlib.h>
main(){
	float num;
	
	printf("Digite um numero:");
	scanf("%f",&num);
	
	if (num > 0){
		printf("O numero %f eh positivo.", num);
	}else if (num < 0){
		printf("O numero %f eh negativo", num);
	}else{
		printf("O numero %f eh nulo.", num);
	}
}
