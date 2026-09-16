#include<stdio.h>
#include<stdlib.h>
#define max 50

int somarVetor(int vet[], int n) {
    // Critério de parada: vetor vazio
    if (n == 0) {
        return 0;
    }
    // Passo Recursivo
    return vet[n - 1] + somarVetor(vet, n - 1);
}

int main()
{
    int soma,vet[max],x,i;

    do
    {
        printf("Tamanho do vetor (maximo de 50): ");
        scanf("%d",&x);
    }while(x<=0 || x>max);

    for(i=0;i<x;i++)
    {
        printf("\nElemento %d: ",i);
        scanf("%d",&vet[i]);
    }


    soma=somarVetor(vet,x);
    printf("\nSoma dos elementos do vetor: %d",soma);
    printf("\n\n");
    system("pause");
    return 0;
}
