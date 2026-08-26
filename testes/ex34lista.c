//ex 34 lista:
#include <stdio.h>
#include <stdlib.h>
main(){
	float rendaMensal,valorEmp,valorPrestacao,quantPrestacao;
	printf("Digite a renda mensal:");
	scanf("%f", &rendaMensal);
	printf("\nDigite o valor do emprestimo que deseja solicitar:");
	scanf("%f", &valorEmp);
	printf("Digite o numero de prestacoes que deseja pagar o emprestimo:");
	scanf("%f", &quantPrestacao);
	valorPrestacao = valorEmp/quantPrestacao;
	if (valorEmp <= rendaMensal*10){
		if (valorPrestacao <= rendaMensal*0.3){
			printf("O emprestimo ser concedido.");	
		} 
	}else{
		printf("O emprestimo nao pode ser concedido.");
	}
}
