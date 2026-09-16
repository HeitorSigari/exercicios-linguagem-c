#include<stdio.h>
#include<stdlib.h>

int leitura_int()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    return num;
}

int fatorial(int x)
{
    if(x<0)
    {
        return -1;
    }
    else
    {
        int fat=1,i;
        for(i=2;i<=x;i++)
        {
            fat=fat*i;
        }
        return fat;
    }
}

int main()
{
    int a,b,c,fata,fatb,fatc;
    a=leitura_int();
    b=leitura_int();
    c=leitura_int();

    fata=fatorial(a);
    fatb=fatorial(b);
    fatc=fatorial(c);

    printf("\n\nFatorial de %d: %d",a,fata);
    printf("\n\nFatorial de %d: %d",b,fatb);
    printf("\n\nFatorial de %d: %d\n\n",c,fatc);

    system("pause");
    return 0;
}
