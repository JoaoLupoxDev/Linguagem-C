#include <stdio.h>
#include <stdlib.h>
main(){
	int num, bin=0, paridade=0;
	printf("Digite um inteiro entre 0 e 31:");
	scanf("%d", &num);
	if (num >= 16){
		bin += 10000;
		paridade += 1;
		num -= 16;
	}if (num >= 8){
		bin += 1000;
		paridade += 1;
		num -= 8;
	}if (num >= 4){
		bin += 100;
		paridade += 1;
		num -= 4;
	}if (num >= 2){
		bin += 10;
		paridade += 1;
		num -= 2;
	}if (num == 1){
		bin += 1;
		paridade += 1;
		num -= 1;
	}if (paridade % 2 == 0){
		bin *= 10;
	}else{
		bin *=10;
		bin += 1;
	}
	printf("%d", bin);
}
