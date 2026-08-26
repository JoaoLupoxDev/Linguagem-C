#include <stdio.h>
#include <stdlib.h>

main(){
	int num;
	
	printf("Digite um numero inteiro de 1 a 100:");
	scanf("%d", &num);
	
	switch (num){
		case 1:
			printf("UM");
			break;
		case 2:
			printf("DOIS");
			break; // e por ai vai...
	}
}
