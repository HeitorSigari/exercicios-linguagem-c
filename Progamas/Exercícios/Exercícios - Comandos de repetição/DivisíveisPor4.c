#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,N,mult;
    printf("\n\nEste programa determinada todos os numeros inteiros multiplos de 4 menores que um determinado inteiro inserido.");

    do
    {
        printf("\n\nDigite o valor do numero (observacao: numeros positivos): ");
        scanf("%d",&N);
    }
    while(N<=0);


    for(i=1;i<N;i++)
    {
        mult=i%4;
        if(mult==0)
        {
            printf("\n%d e multiplo de 4.\n",i);
        }
    }

    printf("\nLembrando: multiplos sao numeros divisiveis por 4.\n\n");

    system("pause");
    return 0;
}
