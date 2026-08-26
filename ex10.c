#include <stdio.h>
#include <stdlib.h>

main(){
	int tipo, valorPorAcre;
	float area, custoTotal, descontoAcre, descontoPorCustoMaior;
	
	printf("Digite o tamanho da area em acres a ser pulverizada:");
	scanf("%f", &area);
	printf("\nDigite o tipo da praga (1 a 4):");
	scanf("%d", &tipo);
	switch (tipo){ // relação casos para os tipos de pragas e valor pago por acre
		case 1:
			valorPorAcre = 50;
			break;
		case 2:
			valorPorAcre = 100;
			break;
		case 3:
			valorPorAcre = 150;
			break;
		case 4:
			valorPorAcre = 250;
			break;
	} 
	if (area > 1000){
		descontoAcre = 0.05;
		custoTotal = (valorPorAcre * area) - (custoTotal*descontoAcre);
	}
	else{
		custoTotal = valorPorAcre * area;
	}
	if (custoTotal > 750){
			descontoPorCustoMaior = (custoTotal-750)*0.10;
			custoTotal = (valorPorAcre * area) - (descontoPorCustoMaior);
	}
	printf("\nO valor pago sera de: %.2f reais", custoTotal);
}
