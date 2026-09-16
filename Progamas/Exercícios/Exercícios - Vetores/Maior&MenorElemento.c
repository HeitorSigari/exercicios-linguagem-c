#include<stdio.h>
#include<stdlib.h>

int main()
{
    int V[10],Maior,menor,i,M,m;
    printf("\n\nEste programa determina o maior e o menor elemento inseridos em um vetor de tamanho 10, bem como sua posicao em relacao ao indice.");

    printf("\n\nDigite o valor de V[0]: ");
    scanf("%d",&V[0]);
    Maior=V[0];
    menor=-99999;
    M=0;

    printf("\nDigite o valor de V[1]: ");
    scanf("%d",&V[1]);

    if(V[1]>V[0])
    {
        menor=Maior;
        m=0;
        Maior=V[1];
        M=1;
    }
    else
    {
        if(V[1]<V[0])
        {
            menor=V[1];
            m=1;
        }
        else
        {
            menor=Maior;
            M=1;
            m=M;
        }
    }

    for(i=2;i<10;i++)
    {
        printf("\nDigite o valor de V[%d]: ",i);
        scanf("%d",&V[i]);
        if(V[i]>Maior)
        {
            Maior=V[i];
            M=i;
        }
        else
        {
            if(V[i]<menor)
            {
                menor=V[i];
                m=i;
            }
        }
    }

    printf("\n\nValor do maior numero: %d. Posicao do maior numero: %d",Maior,M);
    printf("\nValor do menor numero: %d. Posicao do menor numero: %d\n\n",menor,m);

    system("pause");
    return 0;
}
