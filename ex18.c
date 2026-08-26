#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int c, valor, cubo, quad;
	float raiz;
	
	for (c=5;c>0;c--){
		printf("\nDigite um valor inteiro:");
		scanf("%d", &valor);
		
		quad = valor * valor;
		cubo = valor * valor * valor;
		raiz = sqrt(valor);
		
		printf("\nO quadrado de %d eh %d", valor, quad);
		printf("\nO cubo de %d eh %d", valor, cubo);
		printf("\nE a raiz de %d eh %f\n", valor, raiz);
	}	
}
