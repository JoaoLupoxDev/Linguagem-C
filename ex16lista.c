// 	ex 16 lista:
#include <stdlib.h>
#include <stdio.h>
main(){
	int centena,dezena,unidade,numSalvo,numInv;
	printf("Digite a centena, dezena e unidade de um numero com 3 algarismos:");
	scanf("%d %d %d", &centena, &dezena, &unidade);
	numSalvo = (centena*100) + (dezena*10) + (unidade);
	printf("\nVoce digitou o numero %d", numSalvo);
	numInv = (unidade*100)+(dezena*10)+(centena);
	printf("\nO inverso de %d eh %d", numSalvo, numInv);
}
