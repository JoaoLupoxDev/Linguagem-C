//ex 35 lista:
#include <stdio.h>
#include <stdlib.h>
main(){
	int num;
	printf("Digite um numero de 1 a 7 referente aos dias da semana:");;
	scanf("%d", &num);
	printf("\nO dia da semana referente ao numero eh: ");
	switch (num){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda");
			break;
		case 3:
			printf("Terca");
			break;
		case 4:
			printf("Quarta");
			break;
		case 5:
			printf("Quinta");
			break;
		case 6:
			printf("Sexta");
			break;
		case 7:
			printf("Sabado");
			break;
		default:
			printf("Erro");
			break;
	}
}
