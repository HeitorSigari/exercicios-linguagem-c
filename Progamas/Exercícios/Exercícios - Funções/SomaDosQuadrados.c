#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int quad_2num(int x, int y)
{
    int quad;
    quad=(x*x)+(y*y);
    return quad;
}

int main()
{
    int a,b,res;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número a: ");
    scanf("%d",&a);
    printf("\n\nDigite um número b: ");
    scanf("%d",&b);

    res=quad_2num(a,b);
    printf("\n\nA soma dos quadrados dos números é: %d\n\n",res);

    return 0;
}
