#include<stdio.h>
#include<stdlib.h>
#define MAX 30

int lower(int vet[],int K)
{
    if(K==0){
    return vet[K];
    }

    int menorAnterior = lower(vet, K-1);

    if(vet[K]<menorAnterior){
    return vet[K];
    }
    else{
        return menorAnterior;
    }

}

int main()
{
    int tam, vetor[MAX], i, menor;
    printf("\n\n\t\tMENOR ELEMENTO DO VETOR\n");
    do
    {
        printf("\nDigite o tamanho do vetor (maximo de 30): ");
        scanf("%d",&tam);
    }while(tam<0 || tam>30);

    for(i=0;i<tam;i++)
    {
        printf("\nDigite o elemento %d do vetor: ",i);
        scanf("%d",&vetor[i]);
    }

    menor=lower(vetor,tam-1);
    printf("\nMenor elemento do vetor: %d\n\n",menor);

    system("pause");
    return 0;
}
