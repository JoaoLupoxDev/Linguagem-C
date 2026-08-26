#include <stdio.h>
#include <stdlib.h>

main(){
	int num=2,x,primos=1;
	
	printf("%d ", num);
	num = 3;
	
	while (primos < 20){
		for (x=2;x<num;x++){
			if (num % x == 0){
				break;
			}
			else{
				if (x == num-1){
					printf("%d ", num);
					primos += 1;
					break;
				}
			}
		}
		num += 1;	
	}
	printf("\nEstes sao os 20 primeiros números primos.");
}
