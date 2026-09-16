#include<stdio.h>
#include<stdlib.h>

void pares_gap()
{
    int a,b,i;
    printf("Digite um numero: ");
    scanf("%d",&a);
    do
    {
       printf("\nDigite outro numero (distinto): ");
       scanf("%d",&b);
    }while(b==a);

    printf("\nNumeros pares entre a e b: ");

    if(a<b)
    {
        for(i=0;a+i<=b;i++)
        {
            if((a+i)%2==0)
            {
                printf("%d ",a+i);
            }
        }
    }
    else
    {
        for(i=0;b+i<=a;i++)
        {
            if((b+i)%2==0)
            {
                printf("%d ",b+i);
            }
        }
    }
}

int main()
{
    pares_gap();
    printf("\n\n");
    return 0;
}
