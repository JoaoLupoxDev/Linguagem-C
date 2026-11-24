#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int custo_lata=20, volume_lata=5;
    float raio, altura, areaCilindro, quantLata, custo, quantLitros;

    printf("\nDigite a altura do cilindro em metros: ");
    scanf("%f", &altura);
    printf("\nDigite o raio do cilindro em metros: ");
    scanf("%f", &raio);

    areaCilindro = 3.14*pow(raio, 2) + 2*3.14*raio*altura;
    quantLata = areaCilindro/volume_lata*3;
    quantLitros = quantLata * volume_lata;
    custo = quantLata * custo_lata;
    
    printf("A quantidade de litros necessaria e de: %.2f\n litros", quantLitros);
    printf("A area do tanque de combustivel e de: %.2f metros quadrados\n", areaCilindro);
    printf("A quantidade de latas necessarias e de: %.2f latas\n", quantLata);
    printf("E o custo total sera de: %.2f reais\n", custo);

    system("PAUSE");
}