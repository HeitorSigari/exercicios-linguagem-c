#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int som_ele_vet(int vet[],int N)
{
    if(N<0)
    {
        return -1;
    }
    else
    {
        int i,S=0;
        for(i=0;i<N;i++)
        {
            S+=vet[i];
        }
        return S;
    }
}

int main()
{
    int tam,k,v[MAX],soma;
    do
    {
        printf("Defina o tamanho do vetor (max. 10): ");
        scanf("%d",&tam);
    }while(tam>MAX);

    for(k=0;k<tam;k++)
    {
        printf("\nElemento v[%d]: ",k+1);
        scanf("%d",&v[k]);
    }
    system("cls");

    soma=som_ele_vet(v,tam);
    if(soma==-1)
    {
        printf("\n\nERRO! Soma = -1\n\n");
    }
    else
    {
        printf("\n\nSoma dos elementos do vetor: %d\n\n",soma);
    }

    system("pause");
    return 0;
}
