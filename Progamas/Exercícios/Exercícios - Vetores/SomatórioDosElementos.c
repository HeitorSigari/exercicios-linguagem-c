#include<stdio.h>
#include<stdlib.h>

int main()
{
    float V[20],S=0;
    int N,i;

    printf("\n\t\tSOMATORIO DOS ELEMENTOS DE UM VETOR\n\n");

    do
    {
        printf("\nTamanho do vetor (maximo de 20): ");
        scanf("%d",&N);
    }
    while(N<=0 || N>20);

    for(i=0;i<N;i++)
    {
        printf("\nElemento V[%d]: ",i);
        scanf("%f",&V[i]);
        S+=V[i];
    }

    printf("\n\nValor total da soma: %.1f\n\n",S);
    system("pause");
    return 0;
}
