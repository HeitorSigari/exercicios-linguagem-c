#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,v=1;
    printf("\n\nEste programa calcula o fatorial (!) de um numero 'n', tal que 'n' pertenca ao conjunto dos naturais");
    printf("\n\nDigite o valor de n: ");
    scanf("%d",&n);

    if(n==0)
    {
        printf("\n\nO valor de %d! e igual a 1 por definicao.\n\n",n);
    }
    else
    {
        if(n>0)
        {
            for(i=1;i<=n;i++)
            {
                v=v*i;
            }
            printf("\n\nO valor de %d! e igual a: %d \n\n",n,v);
        }
        else
        {
            printf("\n\nPor favor, respeite a restricao do conjunto que contem 'n'.\n\n");
        }
    }
    system("pause");
    return 0;

    /*Como n foi definido como sendo um dado do tipo int, ele só consegue armazenar valores até aproximadamente 2.10^9, portanto o problema chama-se "overlflow" (estouro de capacidade)*/
}
