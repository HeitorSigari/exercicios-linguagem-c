#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1,num2,PI1,PI2,R1,R2;

    printf("\n\nBem vindo! Este programa realiza a inversao dos algarismos de qualquer numero inteiro positivo entre 100 e 999");
    printf("\n\nPor favor, digite um numero no intervalo fornecido: ");
    scanf("%d",&num1);

    PI1 = num1/100;
    R1 = num1%100;

    PI2 = R1/10;
    R2 = R1%10;

    num2 = R2*100 + PI2*10 + PI1;

    printf("\n\nAo inverter os algarismos de %d, encontra-se: %d\n\n",num1,num2);

    system("Pause");
    return 0;
}
