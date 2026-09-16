#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,num,res;
    printf("\n\nEste algoritmo calcula e fornece a tabuada de 1 a 10 de um determinado numero inteiro.");
    printf("\n\nPor favor, digite o numero: ");
    scanf("%d",&num);

    if(num==0)
    {
        printf("\n\nSomente inteiros nao nulos sao aceitos.\n\n");
    }
    else
    {
        for(i=1;i<=10;i++) /*A lógica de uso desse for é que o "i" será incrementado até valer 10, e cada valor assumido por ele será usado para multiplicar o numero*/
        {
            res=num*i;
            printf("\n%d*%d=%d\n\n",num,i,res);
        }
    }
    system("pause");
    return 0;
}
