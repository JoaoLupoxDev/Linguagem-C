#include <stdio.h>
#include <stdlib.h>
main(){
	float n1,n2,n3,maior;
	int c;
	
	printf("Digite 3 numeros:");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	for (c=0;c<2;c++){
		if (c==0){
			maior = n1;
		} 
		else{
			if (n2 > maior){
				maior = n2;
			}
			if (n3 > maior){
				maior = n3;
			}
		}
	}
	printf("%f eh o maior numero.", maior);
}
