#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N1,N2,PI,R;
    printf("\n\nEste programa, fornecidos dois numeros inteiros, imprime separadamente a parte inteira de sua divisao e seu resto.");
    printf("\n\nDigite o primeiro numero: ");
    scanf("%d",&N1);
    printf("\n\nDigite o segundo numero: ");
    scanf("%d",&N2);
    PI = N1/N2;
    R = N1%N2;
    printf("\n\nA parte inteira da divisao dos numeros fornecidos e: %d",PI);
    printf("\n\nO resto da divisao dos numeros fornecidos e: %d\n\n",R);
    return 0;
}
