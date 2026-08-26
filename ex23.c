#include <stdio.h>
#include <stdlib.h>

main(){
	float n1=1, n2=1, media;
	
	printf("Calculando medias");
	printf("\nDigite valor 0 nas duas notas para finalizar o programa."); 
	
	while (n1 != 0 && n2 != 0){
		printf("\nDigite a primeiro nota:");
		scanf("%f", &n1);
		
		printf("\nDigite a segunda nota:");
		scanf("%f", &n2);
		
		if (media != 0){
			media = (n1+n2)/2;
			printf("\nA media das notas eh de %f", media);
		}
	}
	printf("\nPrograma finalizado.");
}
