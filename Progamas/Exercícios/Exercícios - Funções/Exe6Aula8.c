#include<stdio.h>
#include<stdlib.h>

void divisores(int x)
{
    int i;
    if(x<=0)
    {
        printf("\n\nErro! (numero negativo)");
    }
    else
    {
        for(i=1;i<=x;i++)
        {
            if(x%i==0)
            {
                printf("\n\n%d eh divisor de %d",i,x);
            }
        }
    }
}

int fatorial(int k)
{
    if(k<0)
    {
        return -1;
    }
    else
    {
        int fat=1,i;
        for(i=2;i<=k;i++)
        {
            fat=fat*i;
        }
        return fat;
    }
}

int main()
{
    int N,i,num,fat;
    do
    {
       printf("Quantos numeros devem ser lidos (valor positivo)? ");
       scanf("%d",&N);
    }while(N<=0);

    for(i=0;i<N;i++)
    {
        printf("\n\nDigite um numero inteiro positivo: ");
        scanf("%d",&num);

        fat=fatorial(num);
        printf("\n\nFatorial de %d: %d",num,fat);

        divisores(num);
    }
    printf("\n\n");

    system("pause");
    return 0;
}
