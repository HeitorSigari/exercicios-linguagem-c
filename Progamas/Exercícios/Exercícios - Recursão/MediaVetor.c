#include<stdio.h>
#include<stdlib.h>
#define max 50

float mediaVetor(int vet[], int n, int k) {
    // Caso Base: se não há mais elementos, retorna 0
    if (n == 0) {
        return 0;
    }
    // Passo Recursivo: divide o elemento atual por K e soma com o próximo
    else {
        return ((float)vet[n - 1] / k) + mediaVetor(vet, n - 1, k); // O Parâmetro K é fixo para cada chamada
    }
}

int main()
{
    int vet[max],x,i;
    float media;

    do
    {
        printf("Tamanho do vetor (maximo de 50): ");
        scanf("%d",&x);
    }while(x<=0 || x>max);

    for(i=0;i<x;i++)
    {
        printf("\nElemento %d: ",i+1);
        scanf("%d",&vet[i]);
    }


    media=mediaVetor(vet,x,x);
    printf("\nMedia dos elementos do vetor: %.2f",media);
    printf("\n\n");
    system("pause");
    return 0;
}
