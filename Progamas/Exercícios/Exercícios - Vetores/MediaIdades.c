#include<stdio.h>
#include<stdlib.h>

int main()
{
    int I[10],k,soma,menor;
    float M;

    printf("\n\nEste algoritmo calcula a Media aritmetica da idade de 10 pessoas, bem como imprime quais sao menores do que esta.\n\n");
    for(k=0;k<10;k++)
    {
        do
        {
            printf("\nDigite uma idade (numero inteiro positivo): ");
            scanf("%d",&I[k]);
        }
        while(I[k]<=0);

        soma+=I[k];
    }

    M=(float)soma/10;

    for(k=0;k<10;k++)
    {
        if(I[k]<M)
        {
            menor++;
        }
    }

    printf("\n\nMedia aritmetica das idades: %.1f",M);
    printf("\n%d idades sao menores do que a media.\n\n",menor);

    system("pause");
    return 0;
}
