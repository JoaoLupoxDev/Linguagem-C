// questao de octal para decimal:
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main(){
	int octal, centenaO, dezenaO, unidadeO, centenaD, dezenaD, unidadeD, somaD; // O = octal D = decimal
	printf("Digite um numero de 3 digitos ate 777:");
	scanf("%d", &octal);
	centenaO = octal / 100;
	dezenaO = (octal % 100)/10;
	unidadeO = (octal % 100)%10;
	unidadeD = unidadeO * pow(8, 0);
	if (octal < 9){
		printf("O numero %d em octal eh %d em decimal",octal, unidadeD);
	}else if (octal > 9 && octal < 100){
		dezenaD = dezenaO * pow(8, 1);
		somaD = dezenaD + unidadeD;
		printf("O numero %d em octal eh %d em decimal", octal, somaD);
	}else if (octal > 100){
		dezenaD = dezenaO * pow(8,1);
		centenaD = centenaO * pow(8, 2);
		somaD = unidadeD + dezenaD + centenaD;
		printf("O numero %d em octal eh %d em decimal",octal, somaD);
	}
}
