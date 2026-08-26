// ex 36 lista:
#include <stdio.h>
#include <stdlib.h>
main(){
	float e1,e2,e3,e4,e5,media=70;
	printf("Digite as notas dos 5 exames:");
	scanf("%f %f %f %f %f", &e1, &e2, &e3, &e4, &e5);
	if (e1>70&&e2>70&&e3>70&&e4>70&&e5>70){
		printf("O aluno foi classe A!");
	}else if (e1>70&&e2>70&&e4>70&&e3<70&&e5<70){
		printf("O aluno foi classe B!");
	}else if (e1>70&&e2>70&&e3>70&&e4>70&&e5<70){
		printf("O aluno foi classe C!");
	}else{
		printf("O aluno foi reprovado!");
	}
}
