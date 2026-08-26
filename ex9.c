#include <stdio.h>
#include <stdlib.h>

main(){
	double litrosVendidos, precoG=3.10, precoA=2.30, custoTotal, desconto;
	char tipo;
	
	printf("Digite o numero de litros vendidos:");
	scanf("%lf", &litrosVendidos);
	printf("\nDigite o tipo do combustivel [A=Alcool][G=Gasolina]:");
	scanf(" %c", &tipo);
	if (tipo == 'A' || tipo == 'a'){
		if (litrosVendidos <= 25){
			desconto = litrosVendidos * 0.02;
			custoTotal = litrosVendidos * 2.3 - desconto;
		}else{
			desconto = litrosVendidos * 0.04;
			custoTotal = litrosVendidos * 2.3 - desconto; 			
		}
		printf("O valor a ser pago eh de: %.2lf reais", custoTotal);
	}else if (tipo == 'G' || tipo == 'g'){
		if (litrosVendidos <= 25){
			desconto = litrosVendidos * 0.03;
			custoTotal = litrosVendidos * 3.1 - desconto; 	
		}else{
			desconto = litrosVendidos * 0.05;
			custoTotal = litrosVendidos * 3.1 - desconto;
		}
		printf("O valor a ser pago eh de: %.2lf reais", custoTotal);
	}else{
		printf("Digite apenas A para Alcool ou G para Gasolina.");
	}
}
