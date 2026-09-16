#include<stdio.h>
#include<stdlib.h>
int main()
{
    int X,Y;
    printf("\n\nEste programa retorna valores de Y em funcao de X baseado em diferentes condicoes, sendo elas: Y=X, se X<1; Y=0, se X=1; Y=X^2, se X>1.");
    printf("\n\nPor favor, forneca um valor para X: ");
    scanf("%d",&X);

    if(X<1)
    {
        Y=X;
    }
    else
    {
        if(X==1)
        {
            Y=0;
        }
        else
        {
            Y=X*X;
        }
    }
    printf("\n\nO valor de Y e: %d\n\n",Y);
    /*Ao utilizar o printf uma única vez no final, evita-se a repetição de um printf dentro de cada condição*/
    system("pause");
    return 0;
}

