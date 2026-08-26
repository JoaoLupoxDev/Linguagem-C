#include <stdio.h>
#include <stdlib.h>

int main (){
	float altura, peso_ideal;
	char sexo;
	printf("\nDigite sua altura em metros: ");
	scanf("%f", &altura);
	printf("\nDigite seu sexo [M/F]: ");
	scanf("%c", &sexo);
	getchar();
	peso_ideal = (72.7*altura)-58;
	printf("\nO sexo digitado foi %c e seu peso ideal é: %.2f\n", sexo, peso_ideal);
}