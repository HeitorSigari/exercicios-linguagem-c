#include<stdio.h>
#include<stdlib.h>
#define max 50

int ocorrenciaVET(int vet[],int tam, int num)
{
        if(tam<0)
    {
        return -1;
    }
    else
    {
        int i,cont=0;
        for(i=0;i<tam;i++)
        {
            if(vet[i]==num)
            {
                cont++;
            }
        }
        return cont;
    }
}

int main()
{
    int k,tam,x,v[max],qtd;
    do
    {
        printf("Qual o tamanho do vetor (maximo 50)? ");
        scanf("%d",&tam);
    }while(tam>max);

    for(k=0;k<tam;k++)
    {
        printf("\nElemento v[%d]: ",k+1);
        scanf("%d",&v[k]);
    }

    printf("\n\nQual o numero (inteiro) a ser analisado? ");
    scanf("%d",&x);
    system("cls");

    qtd=ocorrenciaVET(v,tam,x);
    if(qtd==-1)
    {
        printf("\n\nERRO! -> Vetor de tamanho negativo\n\n");
    }
    else
    {
        printf("\n\nO numero %d aparece %d vez(es) no vetor.\n\n",x,qtd);
    }

    system("pause");
    return 0;
}
