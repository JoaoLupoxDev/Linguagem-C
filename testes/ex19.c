#include <stdio.h>
#include <stdlib.h>

//ex 2 de loops

main(){
	int num,fatorial=1,c;
	
	
	printf("Digite um numero natural:");
	scanf("%d", &num);
	c = num;
	
	for (num;num>0;num--){
		fatorial *= num;
	}
	
	printf("O fatorial de %d eh %d", c, fatorial);
	
}
