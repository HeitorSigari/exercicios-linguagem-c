#include<stdio.h>
#include<stdlib.h>

int main()
{
    float res=1,x;
    int n,i;
    printf("\n\nEste algoritmo calcula um numero 'x' qualquer elevado a um expoente inteiro positivo 'n'.");
    printf("\n\nDigite o valor de x: ");
    scanf("%f",&x);
    printf("\n\nDigite o valor de n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        res = res*x;
    }

    printf("\n\nO resultado de x^n e: %.2f \n\n",res);

    system("pause");
    return 0;
}
