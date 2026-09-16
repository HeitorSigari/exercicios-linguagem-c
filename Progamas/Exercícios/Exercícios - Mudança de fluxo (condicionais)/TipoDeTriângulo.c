#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("\n\nBem vindo! Este programa determina se um triangulo e equilatero, isoceles ou entao escaleno.");
    printf("\n\nDigite o valor do primeiro lado (positivo): ");
    scanf("%d",&a);
    printf("\n\nDigite o valor do segundo lado (positivo): ");
    scanf("%d",&b);
    printf("\n\nDigite o valor do terceiro lado (positivo): ");
    scanf("%d",&c);

    if(a<b+c && b<a+c && c<a+b) /*Condição de existência sem ordenamento nos lados ou determinar um maior*/
    {
        if(a==b)
        {
            if(a==c)
            {
                printf("\n\nOs valores fornecidos formam um triangulo equilatero.\n\n");
            }
            else
            {
                printf("\n\nOs valores fornecidos formam um triangulo isoceles.\n\n"); /*Pois "a" é igual a "b"*/
            }
        }
        else /*Aqui "a" já é obrigatoriamente diferente de "b"*/
        {
            if(a==c)
            {
                printf("\n\nOs valores fornecidos formam um triangulo isoceles.\n\n");
            }
            else
            {
                if(b==c) /*É necessário acrescentar mais um if para que a possibilidade b=c seja considerada*/
                {
                    printf("\n\nOs valores fornecidos formam um triangulo isoceles.\n\n");
                }
                else
                {
                    printf("\n\nOs valores fornecidos formam um triangulo escaleno\n\n");
                }
            }
        }
    }
    else
    {
        printf("Os valores fornecidos nao respeitam a condicao de existencia de um triangulo, portanto e impossivel classifica-lo.");
    }
    system("pause");
    return 0;

    /* Em suma, o código comporta 3 comparações para verificar a condição de existência,
    e 3 comparações na árvore de possibilidades da classicação, portanto 6 comparações totais.*/
}
