#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,r3,r5;
    printf("\n\nEste programa determina se um numero inteiro qualquer e divisivel por 5 e por 3 ao mesmo tempo.");
    printf("\n\nPor favor, insira um numero: ");
    scanf("%d",&num);

    r3 = num%3;
    r5 = num%5;

    if(r3==0 && r5==0)
    {
        printf("\n\nO numero %d e divisivel por 5 e por 3 de forma simultanea.\n\n",num);
    }
    else
    {
        if(r3==0 && r5!=0)
        {
            printf("\n\nO numero %d e somente divisivel por 3.\n\n",num);
        }
        if(r3!=0 && r5==0)
        {
            printf("\n\nO numero %d e somente divisivel por 5.\n\n",num);
        }
    }
    system("pause");
    return 0;
}
