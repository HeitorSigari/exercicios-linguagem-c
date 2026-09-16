#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,num,maior1,maior2;


    for(i=1;i<=10;i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d",&num);
        if(i==1)
        {
            maior1=num;
            maior2=-2147483648; /*Uso de valor sentinela, o menor int possível, pois, dessa forma, qualquer número inserido na segunda iteração será maior que esse valor.*/
        }
        else
        {
            if(num>maior1)
            {
                maior2=maior1;
                maior1=num;
            }
            else
            {
                if(num>maior2)
                {
                    maior2=num;
                }
            }
        }
    }

    printf("\n\nO maior numero digitado foi: %d\n\n",maior1);
    printf("\n\nO segundo maior numero digitado foi: %d\n\n",maior2);
}
