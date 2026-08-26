#include <stdio.h>
#include <stdlib.h>

main(){
	int num;
	
	printf("\nDigite um numero inteiro:");
	scanf("%d", num);
	
	printf("Voce digitou o numero %d", num);
	
	if (num % 10 == 0){
		if (num % 5 == 0){
			if (num % 2 == 0){
				printf("\nEste numero eh divisivel por 10, 5 e 2.");
			}
		}
	}
	else{
		printf("\nEste numero nao eh divisivel por 10, 5 e 2.");
	}
	system("PAUSE");
}