// ex 32 lista:
// nao consegui fazer
#include <stdio.h>
#include <stdlib.h>
main(){
	char caracter;
	printf("Digite um caracter em minusculo:");
	scanf(" %c", &caracter);
	if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
		printf("Este caractere eh uma vogal.");
	}else{
		printf("Este caractere eh uma consoante.");
	}if (caracter == '1'||caracter == '2'||caracter == '3'||caracter == '4'||caracter == '5'||caracter=='6'||caracter=='7'||caracter=='8'||caracter=='9'||caracter=='0'){
		printf("Este caractere eh um numero.");
	}else{
		printf("Este caractere eh um simbolo.");
	}
}
