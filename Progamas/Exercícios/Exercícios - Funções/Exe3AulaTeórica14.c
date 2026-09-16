#include<stdio.h>
#include<stdlib.h>

void leituraVET10(int u[10])
{
    int i;
    printf("vetor = [ ");
    for(i=0;i<10;i++)
    {
        printf("%d ",u[i]);
    }
    printf("]");
}

int soma_intervalo(int v[10],int x,int y)
{
    if(x>y)
    {
        int i,S=0;
        for(i=0;i<10;i++)
        {
            if(v[i]>y && v[i]<x)
            {
                S+=v[i];
            }
        }
        return S;
    }
    else
    {
        if(x<y)
        {
            int i,S=0;
            for(i=0;i<10;i++)
            {
                if(v[i]>x && v[i]<y)
                {
                    S+=v[i];
                }
            }
            return S;
        }
        else
        {
            int i,S=0;
            for(i=0;i<10;i++)
            {
                if(v[i]==x)
                {
                    S+=v[i];
                }
            }
            return S;
        }
    }
}

int main()
{
    int vet[10]={2,99,4,5,76,0,-1,6,3,9},a,b,soma;
    printf("Numero de inicio do intervalo: ");
    scanf("%d",&a);
    printf("\nNumero de fim do intervalo: ");
    scanf("%d",&b);

    printf("\n");
    leituraVET10(vet);

    soma=soma_intervalo(vet,a,b);
    printf("\n\nSoma dos elementos do vetor dentro do intervalo definido: %d",soma);
}
