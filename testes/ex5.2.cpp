#include <stdio.h>
#include <stdlib.h>

main(){
	char letra;
	printf("Digite uma letra: ");
	letra = getchar();
	if (letra == 'a' || letra == 'e' || letra == 'i'|| letra == 'o'|| letra == 'u'){
		printf("A letra %c e uma vogal\n.", letra);
	}
	else{
		printf("A letra %c e uma consoante.\n", letra);
	}
	system("PAUSE");
}
