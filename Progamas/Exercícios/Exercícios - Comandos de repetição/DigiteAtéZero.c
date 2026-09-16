#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cont=0,num,maior,menor;
    printf("\nDigite um numero inteiro: ");
    scanf("%d",&num);
    maior=num;
    menor=num;

    while(num!=0)
    {
        if(num>maior)
        {
            maior=num;
        }
        else
        {
            if(num<menor)
            {
                menor=num;
            }
        }
        cont++;
        printf("\n\nDigite um numero inteiro: ");
        scanf("%d",&num);
    }
    printf("\n\n%d numeros foram lidos.\n\n",cont);
    printf("\n\n%d e o maior dentre eles.\n\n",maior);
    printf("\n\n%d e o menor dentre eles.\n\n",menor);
}
