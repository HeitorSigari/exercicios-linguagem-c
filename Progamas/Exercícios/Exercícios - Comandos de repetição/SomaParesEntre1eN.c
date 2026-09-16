#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,N,S=0;
    printf("\n\nEste programa calcula a soma de todos os numeros pares entre 1 e um determinado numero N.");
    printf("\n\nPor favor, digite o valor de N: ");
    scanf("%d",&N);

    for(i=2;i<=N;i+=2)
    {
        S = S + i;
    }
    printf("\n\nA soma dos pares entre 1 e %d, e igual a %d\n\n",N,S);

    system("pause");
    return 0;
}
