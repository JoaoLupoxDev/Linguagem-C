// ex 27 lista:
#include <stdio.h>
#include <stdlib.h>
main(){
	int n1,n2,n3,c,maior;
	float media;
	printf("Digite 3 numeros:");
	scanf("%d %d %d", &n1, &n2, &n3);
	for (c=0;c<2;c++){
		if (c==0){
			maior = n1;
			media = ((maior*5)+(n2*2.5)+(n3*2.5))/10;
		}
		else{
			if (n2>maior){
				maior = n2;
				media = ((maior*5)+(n1*2.5)+(n3*2.5))/10;
			}
			if(n3>maior){
				maior = n3;
				media = ((maior*5)+(n2*2.5)+(n1*2.5))/10;
			}
		}
	}
	printf("A media ponderada das notas foi de %f", media);
}
