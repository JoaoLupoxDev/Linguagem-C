//ex 28 lista:
#include <stdlib.h>
#include <stdio.h>
main(){
	char letra;
	printf("Digite uma letra em minuscula: ");
	letra = getchar();
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		printf("A letra %c eh uma vogal.", letra);
	}else{
		printf("A letra %c eh uma consoante.", letra);
	}
}
