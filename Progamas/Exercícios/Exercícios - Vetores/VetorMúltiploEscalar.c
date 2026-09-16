#include<stdio.h>
#include<stdlib.h>

int main()
{
    int X[20],Y[20],N,K,i;

    printf("\nEste algoritmo calcula o vetor multiplo escalar resultante de X*K.\n");

    do
    {
        printf("\nTamanho do vetor X (maximo 20): ");
        scanf("%d",&N);
    }
    while(N<=0 || N>20);

    do
    {
        printf("\nValor de K (positivo nao nulo): ");
        scanf("%d",&K);
    }
    while(K<=0);

    for(i=0;i<N;i++)
    {
        printf("\nElemento X[%d]: ",i);
        scanf("%d",&X[i]);
    }

    printf("\n\nVetor resultante: Y[ ");

    for(i=0;i<N;i++)
    {
        Y[i]=X[i]*K;
        printf("%d ",Y[i]);
    }
    printf("]");

    printf("\n\n");
    system("pause");
    return 0;
}
