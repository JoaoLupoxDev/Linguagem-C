#include <stdio.h>
#include <stdlib.h>

main(){
	int num=92,x;
	long long produto=1;
	
	while (num <= 1478){
		for (x=2;x<num;x++){
			if (num % x == 0){
				break;
			}
			else{
				if (x == num-1){
					produto *= num;
					break;
				}
			}
		}
		num += 1;
	}
	printf("O produto dos numeros primos entre 92 e 1478 eh %lld", produto);
}
