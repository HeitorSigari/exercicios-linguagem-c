#include<stdio.h>
#include<stdlib.h>

void somaPares(int N)
{
    int aux;
    if(N>0) //Critério de parada quando N for igual a zero
    {
        somaPares(N-1);
    }

    if(N%2==0){
    printf(" %d",N);
    }

}

int main()
{
    int num;
    do
    {
        printf("Digite um numero par: ");
        scanf("%d",&num);
    }while(num%2 != 0);

    printf("\nNumeros pares de 0 ate %d:\n",num);
    somaPares(num);

    printf("\n\n");
    system("pause");
    return 0;
}
