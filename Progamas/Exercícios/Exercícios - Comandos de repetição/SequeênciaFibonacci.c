#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,atual=0,b=1,prox,N;
    printf("\n\nEste programa mostra a sequencia de Fibonacci para N termos.");
    printf("\n\nQual a quantidade de termos dejesada? ");
    scanf("%d",&N);

    if(N<=0)
    {
        printf("\n\nInsira uma quantidade de termos valida.\n\n");
    }
    else
    {
        for(i=1;i<=N;i++)
        {
            printf("\n%d\n",atual); /*Construindo os cálculos nessa ordem o valor atual sempre é impresso antes de ser atualizado, de modo que se o usuário digitar 1, o programa imprimirá zero.*/
            prox=atual+b;
            atual=b; /*A posição do valor atual na sequência é representado justamente pelo valor de 1*/
            b=prox;
        }
    }

    system("pause");
    return 0;
}
