//ex 33 lista:
#include <stdlib.h>
#include <stdio.h>
main(){
	float x, y;
	printf("Escreva o valor de X e depois o de Y:");
	scanf("%f %f", &x, &y);
	if (x == 0 && y != 0){
		printf("O ponto esta em cima do eixo Y");
	}if (y == 0 && x != 0){
		printf("O ponto esta no eixo X.");
	}if (y != 0 && x != 0){
		if (x < 0){
			if (y > 0){
				printf("O ponto esta no segundo quadrante.");
			}if (y < 0){
				printf("O ponto esta no terceiro quadrante.");
			}
		}if (x > 0){
			if (y > 0){
				printf("O ponto esta no primeiro quadrante.");
			}if (y < 0){
				printf("O ponto esta no quarto quadrante.");
			}
		}
	}
}
