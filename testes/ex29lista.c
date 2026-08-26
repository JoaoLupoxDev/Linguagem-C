//ex 29 lista:
#include <stdlib.h>
#include <stdio.h>
main(){
	float salario,salarioNovo,desconto,descontoMax=334.29;
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	desconto = salario * 0.11;
	if (desconto > descontoMax){
		desconto = descontoMax;
	}
	salarioNovo = salario - desconto;
	printf("Seu salario com desconto eh de R$%.2f", salarioNovo);
}
