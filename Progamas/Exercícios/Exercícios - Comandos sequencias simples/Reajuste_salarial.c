#include<stdio.h>
#include<stdlib.h>

int main()
{
    int C,n,S2,S1=1500;

    printf("\n\nEste programa sera usado para calcular o reajuste salarial de uma Concessionaria,onde a comissao e igual a R$200,00 por carro vendido pelo funcionario.");
    printf("\n\nInforme o numero de carros vendidos: ");
    scanf("%d",&n);

    C=200*n;
    S2=C+S1;

    printf("\n\n-Salario Base: %d,00 R$",S1);
    printf("\n-Numero de carros vendidos: %d",n);
    printf("\n-Comissao total: %d,00 R$",C);
    printf("\n-Salario reajustado a receber: %d,00 R$\n\n",S2);



}
