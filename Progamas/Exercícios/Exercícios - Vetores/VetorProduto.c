#include<stdio.h>
#include<stdlib.h>

int main()
{
    float A[20],B[20],C[20];
    int i,N;

    printf("\n\nEste algoritmo calcula o vetor produto entre os vetores A e B.");

    do
    {
        printf("\n\nPor favor, informe o tamanho desejado para os vetores (maximo de 20 e positivo): ");
        scanf("%d",&N);
    }
    while(N<=0 || N>20);

    for(i=0;i<N;i++)
    {
        printf("\nDigite o elemento A[%d]: ",i);
        scanf("%f",&A[i]);
        printf("\nDigite o elemento B[%d]: ",i);
        scanf("%f",&B[i]);
    }

    printf("\n\nVetor resultante: C[");

    for(i=0;i<N;i++)
    {
        C[i]=A[i]*B[i];
        printf(" %.1f ",C[i]);
    }
    printf("]");

    printf("\n\n");
    system("pause");
    return 0;
}
