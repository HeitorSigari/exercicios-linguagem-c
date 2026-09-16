#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,N,S=0,k; /* "i" é a variável de controle do laço, "N" é a quantidade de números pares, "S" é o valor da soma acumulada, e "k" é o valor do número par atual*/
    printf("\n\nEste programa calcula a soma dos N primeiros numeros pares.");
    printf("\n\nPor favor, digite um valor para N: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        k = 2*i;
        S = S + k;
    }
    printf("\n\nA soma dos %d primeiros nnumeros pares e igual a: %d\n\n",N,S);
    system("pause");
    return 0;
}
