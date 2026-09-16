#include<stdio.h>
#include<stdlib.h>

int main()
{
    int V[15],par=0,M5=0,i;

    printf("\n\nEste programa faz a leitura de entradas positivas para um vetor de indices 0 a 14, e determina quantas sao pares e quantas sao multiplas de 5.\n\n");
    for(i=0;i<15;i++)
    {
        do
        {
            printf("\nDigite a entrada V[%d] (positiva nao nula): ",i);
            scanf("%d",&V[i]);
        }
        while(V[i]<=0);

        if(V[i]%2==0)
        {
            par++;
        }

        if(V[i]%5==0)
        {
            M5++;
        }
    }

    printf("\n\n%d entradas pares foram lidas.",par);
    printf("\n%d entradas multiplas de 5 foram lidas.\n\n",M5);

    system("pause");
    return 0;
}
