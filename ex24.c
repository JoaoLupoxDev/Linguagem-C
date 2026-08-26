//converter um inteiro menor que 32 para binario 
#include <stdio.h>
#include <stdlib.h>
main(){
	int num,numSalvo,bin;
	 
	printf("Digite um inteiro menor que 32:");
	scanf("%d", &num);
	 numSalvo = num;
	 
	if (num > 16){
		num -= 16;
		bin += 10000;
	}
	if (num >= 8){
		num -= 8;
		bin += 1000;
	}
	if (num >= 4){
		num -= 4;
		bin += 100;
	}
	if (num >= 2){
		num -= 2;
		bin += 10;
	}
	if (num > 0){
		num -= 1;
		bin += 1;
	}		
	printf("O numero %d em binario eh %d",numSalvo,bin);
}
