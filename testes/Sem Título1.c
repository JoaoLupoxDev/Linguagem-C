#include <stdio.h>
#include <stdlib.h>
//numero inteiro menor que 32 para binário
main(){
	int num, peso=128, cont=1;
	printf("Digite um numero inteiro menor que 32:");
	scanf("%d", &num);
	printf("\nO numero %d em binario eh: ", num);
	while (cont < 9){
		if (cont < 9 && num == 0){
			printf("0");
		}
		if (num < peso && num != 0){
			printf("0");
			peso /= 2;
		}
		else {
			printf("1");
			num -= peso;
			peso /= 2;
		}
		cont += 1;
	}
}
