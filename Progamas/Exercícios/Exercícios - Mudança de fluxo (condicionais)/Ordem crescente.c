#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A,B,C;
    printf("\n\nCom base em 3 numeros inteiros positivos (e distintos) fornecidos, este programa imprime-os em ordem crescente.");
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
            if(B>C)
            {
                printf("\n\nOs numeros em ordem crescente ficam da seguinte forma: %d, %d, %d.\n\n",C,B,A);
            }
            else
            {
                printf("\n\nOs numeros em ordem crescente ficam da seguinte forma: %d, %d, %d.\n\n",B,C,A);
            }
        }
        else
        {
            printf("\n\nOs numeros em ordem crescente ficam da seguinte forma: %d, %d, %d.\n\n",B,A,C);
        }
    }
    else
    {
        if(B>C)
        {
            if(A>C)
            {
                printf("\n\nOs numeros em ordem crescente ficam da seguinte forma: %d, %d, %d.\n\n",C,A,B);
            }
            else
            {
                printf("\n\nOs numeros em ordem crescente ficam da seguinte forma: %d, %d, %d.\n\n",A,C,B);
            }
        }
        else
        {
            printf("\n\nOs numeros em ordem crescente ficam da seguinte forma: %d, %d, %d.\n\n",A,B,C);
        }
    }
    system("pause");
    return 0;
}
