#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[20],B[20],C[20],N,i; /*Lembrando que não podemos declarar o tamanho do vetor com uma variável, apenas constantes, previamente definidas antes da função main através de "#define" ou não*/

    do
    {
        printf("\n\nQual a quantidade de numeros a ser armazenada nos vetores A e B (maximo de 20)? ");
        scanf("%d",&N);
    }
    while(N>20 || N<=0);

    for(i=0;i<N;i++)
    {
        printf("\nNumero %d para o vetor A: ",i+1);
        scanf("%d",&A[i]);
        printf("\nNumero %d para o vetor B: ",i+1);
        scanf("%d",&B[i]);
    }

    for(i=0;i<N;i++)
    {
        C[i] = A[i] + B[i];
        printf("\nElemento %d do vetor soma resultante: %d",i+1,C[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}
