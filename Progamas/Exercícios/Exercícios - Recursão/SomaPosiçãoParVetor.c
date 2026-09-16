#include<stdio.h>
#include<stdlib.h>
#define tam 10

int somaPosPar(int vet[],int i)
{
    if(i==0){
        return vet[i];
    }

    if(i%2==0){
        return (vet[i] + somaPosPar(vet,i-1));
    }

    return somaPosPar(vet,i-1);
}

int main()
{
    int vetor[tam],S,j;
    for(j=0;j<tam;j++)
    {
        printf("\nElemento %d do vetor: ",j);
        scanf("%d",&vetor[j]);
    }

    S=somaPosPar(vetor,tam-1);
    printf("\n\nSoma dos elementos nas posicoes pares (0,2,4...): %d\n\n",S);

    system("pause");
    return 0;
}
