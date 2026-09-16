#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float P,A,I;
    printf("\n\nBem Vindo. Esta e uma calculadora de Indice de Massa corporea. Por favor, forneca os dados a baixo.");
    printf("\n\nInforme seu peso, em KG: ");
    scanf("%f",&P);
    printf("\n\nInforme sua altura, em metros: ");
    scanf("%f",&A);
    I = P/(A*A);
    printf("\n\nSeu indice de massa corporea, baseado nos dados fornecidos, tem o seguinte valor: %.2f Kg/m^2\n\n",I);
}
