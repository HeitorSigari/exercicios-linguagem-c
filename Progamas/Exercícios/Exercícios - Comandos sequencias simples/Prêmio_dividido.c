#include<stdio.h>
#include<stdlib.h>

int main()
{
    float P1,P2,P3,X;

    printf("\n\nBem vindo! Este programa calcula a divisao de um premio  , em reais, para 3 participantes, baseado na porcentagem que cada um ha de receber devido sua colocacao. O primeiro lugar recebe 46 por cento, o segundo lugar recebe 32 por cento e o terceiro lugar recebe 22 por cento.");
    printf("\n\nDefina o valor do premio: ");
    scanf("%f",&X);
    P1=0.46*X;
    P2=0.32*X;
    P3=0.22*X;
    printf("\n\nO primeiro colocado recebera %2.f",P1);
    printf("\n\nO segundo colocado recebera %2.f",P2);
    printf("\n\nO terceiro colocado recebera %2.f\n\n",P3);

}
