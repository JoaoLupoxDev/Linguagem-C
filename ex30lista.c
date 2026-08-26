//ex 30 lista:
#include <stdlib.h>
#include <stdio.h>
main(){
	float litros, precoTotal, descontoPL, precoA, precoG;
	char tipo;
	printf("Digite quantos litros de combustivel vc deseja:");
	scanf("%f", &litros);
	printf("\nDigite o tipo do combustivel (A = Alcool) (G = Gasolina): ");
	scanf(" %c", &tipo);
	if (tipo == 'A' || tipo == 'a'){
		precoA = 1.9;
		if (litros <= 25){
			descontoPL = 0.02;
		}if (litros > 25){
			descontoPL = 0.04;			
		}
		precoTotal = (litros*precoA)-(litros*descontoPL);
	}if (tipo == 'G' || tipo == 'g'){
		precoG = 2.70;
		if (litros <= 25){
			descontoPL = 0.03;
		}if (litros > 25){
			descontoPL = 0.05;
		}
		precoTotal = (litros*precoG)-(litros*descontoPL);
	}
	printf("\nO valor pago sera de R$%.2f", precoTotal);
	
}
