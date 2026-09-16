#include<stdio.h>
#include<stdlib.h>

int main()
{
    int X[20],Y[20],N,i;

    printf("\n\nEste programa gera um vetor Y com os elementos do vetor X em ordem inversa.\n\n");

    do
    {
        printf("\nTamanho dos vetores (maximo de 20): ");
        scanf("%d",&N);
    }
    while(N<=0 || N>20);

    for(i=0;i<N;i++)
    {
        printf("\nElemento X[%d]: ",i);
        scanf("%d",&X[i]);
    }

    printf("\n\nVetor Y: Y[ ");
    for(i=0;i<N;i++)
    {
        Y[i]=X[N-1-i];
        printf("%d ",Y[i]);
    }
    printf("]");

    printf("\n\n");
    system("pause");
    return 0;
}
