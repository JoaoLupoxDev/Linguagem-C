#include <stdio.h>
#include <stdlib.h>

main(){
	float n1,n2,n3,media;
	
	printf("Digite a 1º nota:");
	scanf("%f", &n1);
	
	printf("Digite a 2º nota:");
	scanf("%f", &n2);
	
	printf("Digite a 3º nota:");
	scanf("%f", &n3);
	
	media = (n1+n2+n3)/3;
	printf("Sua media foi: %.2f\n", media);
	
	if (media >= 7){
		printf("Voce foi aprovado.");
	}else{
		printf("Voce foi reprovado.");
	}
}
