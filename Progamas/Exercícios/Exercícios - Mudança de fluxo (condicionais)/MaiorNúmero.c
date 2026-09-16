#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A,B,C;
    printf("\n\nCom base em 3 numeros inteiros positivos (e distintos) fornecidos, este programa imprime qual e o maior dentre eles.");
    printf("\n\nPor favor, digite o primeiro numero: ");
    scanf("%d",&A);

    printf("\n\nPor favor, digite o segundo numero: ");
    scanf("%d",&B);

    printf("\n\nPor favor, digite o terceiro numero: ");
    scanf("%d",&C);

    if(A>B)
    {
        if(A>C)
        {
            printf("\n\nO maior dentre os numeros e: %d\n\n",A);
        }
        else
        {
            printf("\n\nO maior dentre os numero e: %d\n\n",C);
        }
    }
    else
    {
        if(B>C)
        {
            printf("\n\nO maior dentre os numeros e: %d\n\n",B);
        }
        else
        {
            printf("\n\nO maior dentre os numeros e: %d\n\n",C);
        }
    }
    system("pause");
    return 0;

    /*Feito desta forma, o programa torna-se mais eficiente do que fazendo comparações com "&&",
    ainda que estas estejam logicamente bem encadeadas, pois da forma como foi feito, o maior de
    comparações possíveis que serão feitas pelo programa é dois, tornando-o mais rápido e ocupando
    menos memória*/
}
