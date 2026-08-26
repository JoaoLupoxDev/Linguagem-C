#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float a,b,c,x1,x2,delta;
	
	printf("Digite o coeficiente A:");
	scanf("%f", &a);
	
	printf("Digite o coeficiente B:");
	scanf("%f", &b);
	
	printf("Digite o coeficiente C:");
	scanf("%f", &c);
	
	delta = (b*b) - (4*a*c);
	x1 = (-b + sqrt(delta))/2*a;
	x2 = (-b - sqrt(delta))/2*a;
	
	if (delta > 0){
		printf(x1, x2);
	}else if (delta == 0){
		printf(x1,x2);
	}else if (delta<0){
		printf("Nao existem raizes reais.")
	}
}
