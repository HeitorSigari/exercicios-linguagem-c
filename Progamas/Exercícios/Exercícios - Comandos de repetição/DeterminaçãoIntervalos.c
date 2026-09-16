#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,c1=0,c2=0,c3=0,c4=0;

    printf("\n\nEste programa conta quantos numeros fornecidos pelo usuario estao dentro de determinados intervalos.");
    printf("\nUma entrada de dados negativa finaliza a contagem.");
    printf("\n\nDigite um numero: ");
    scanf("%d",&num);

    while(num>=0)
    {
        if(num<=25)
        {
            c1++;
        }
        else
        {
            if(num<=50)
            {
                c2++;
            }
            else
            {
                if(num<=75)
                {
                    c3++;
                }
                else
                {
                    if(num<=100)
                    {
                        c4++;
                    }
                }
            }
        }
        printf("\n\nDigite um numero: ");
        scanf("%d",&num);
    }

    printf("\n%d numeros estao no intervalo [0,25].",c1);
    printf("\n%d numeros estao no intervalo [26,50].",c2);
    printf("\n%d numeros estao no intervalo [51,75].",c3);
    printf("\n%d numeros estao no intervalo [76,100].\n\n",c4);

    system("pause");
    return 0;
}
