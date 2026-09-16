#include<stdio.h>
#include<stdlib.h>

void imprimirLinhas(int N)
{
    if(N>0){
        imprimirLinhas(N-1);
    }
    int i;
    for(i=0;i<N;i++){
        printf("*");
    }
    printf("\n");
}

int main()
{
    int N;
    printf("Digite o numero de linhas que deseja imprimir: ");
    scanf("%d",&N);
    printf("\n\n");
    imprimirLinhas(N);
    printf("\n\n");

    system("pause");
    return 0;
}
