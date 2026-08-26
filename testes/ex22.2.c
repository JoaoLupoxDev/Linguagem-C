#include <stdio.h>
#include <stdlib.h>

main(){
	int num=2,x,primos=1;
	long int produto=1;
	
	num = 92;
	
	while (num <= 1478){
		for (x=2;x<num;x++){
			if (num % x == 0){
				break;
			}
			else{
				if (x == num-1){
					printf("%d ", num);
					primos += 1;
					produto *= num;
					break;
				}
			}
		}
		num += 1;	
	}
	printf("\nO produto entre os numeros primos de 92 a 1478 eh %ld", produto);
}
