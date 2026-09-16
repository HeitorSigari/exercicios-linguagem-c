#include<stdio.h>
#include<stdlib.h>

int main()
{
    float D,R,C;
    printf("\n\nEste programa atua convertendo um valor em dolares para reais.");

    printf("\n\nPor favor, informe a cotacao atual do dolar: ");
    scanf("%f",&C);

    printf("\n\nPor favor, digite o valor desejado em dolares: ");
    scanf("%f",&D);

    R=D*C;

    printf("\n\nO valor correspondente a %.2f dolares, em reais, e igual: %.2f R$\n\n",D,R);

    system("pause");
    return 0;
}
