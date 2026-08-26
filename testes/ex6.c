#include <stdio.h>
#include <stdlib.h>

main(){
	float n1,n2,n3,soma, maior1, maior2;
	
	printf("Digite um valor: ");
	scanf("%f", &n1);
	
	printf("\nDigite outro valor: ");
	scanf("%f", &n2);
	
	printf("\nDigite o ultimo valor: ");
	scanf("%f", &n3);
	
	if (n1>=n2 && n2>=n3){
		maior1 = n1;
		maior2 = n2;
	}else if (n2 >= n1 && n3>=n1){
		maior1 = n2;
		maior2 = n3;
	}else if (n3>=n2 && n1>=n2){
		maior1 = n3;
		maior2 = n1;
	}	
	soma = maior1 + maior2;
	printf("\nA soma dos maiores valores digitados foi de %.2f\n", soma);
	
	system("PAUSE");
}
