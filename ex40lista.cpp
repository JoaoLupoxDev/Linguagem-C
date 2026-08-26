// ex 40 lista (switch):
#include <stdio.h>
#include <stdlib.h>
main(){
	int num, dezena, unidade;
	printf("Digite um numero de 1 a 100:");
	scanf("%d", &num);
	dezena = num / 10;
	unidade = num % 10;
	if (num == 100){
		printf("O numero %d por extenso eh: cem", num);
	}else if (num > 20){
		printf("O numero %d por extenso eh: ", num);
	}else if (num < 20){
		printf("O numero %d por extenso eh: ", num);
	}
	if (num >= 20 && num < 100){
	switch (dezena){
		case 2:
			printf("vinte e ");
			break;
		case 3:
			printf("trinta e ");
			break;
		case 4:
			printf("quarenta e ");
			break;
		case 5:
			printf("cinquenta e ");
			break;
		case 6:
			printf("sessenta e ");
			break;
		case 7:
			printf("setenta e ");
			break;
		case 8:
			printf("oitenta e ");
			break;
		case 9:
			printf("noventa e ");
			break;
		}
	}
	if (num < 10 || num > 20){
		switch (unidade){
			case 1:
				printf("um");
				break;
			case 2:
				printf("dois");
				break;
			case 3:
				printf("tres");
				break;
			case 4:
				printf("quatro");
				break;
			case 5:
				printf("cinco");
				break;
			case 6:
				printf("seis");
				break;
			case 7:
				printf("sete");
				break;
			case 8:
				printf("oito");
				break;
			case 9:
				printf("nove");
				break;
		}	
	}
	if (num < 20 && num > 9){
	switch (num){
		case 10:
			printf("dez");
			break;
		case 11:
			printf("onze");
			break;
		case 12:
			printf("doze");
			break;
		case 13:
			printf("treze");
			break;
		case 14:
			printf("quatorze");
			break;
		case 15:
			printf("quinze");
			break;
		case 16:
			printf("dezesseis");
			break;
		case 17:
			printf("dezesete");
			break;
		case 18:
			printf("dezoito");
			break;
		case 19:
			printf("dezenove");
			break;
		}
	}		
}
