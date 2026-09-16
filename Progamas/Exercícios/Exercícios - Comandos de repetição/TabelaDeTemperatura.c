#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,T1,T2,F,Dif;
    float C;
    printf("\n\nTabela de temperatura em ordem crescente, de Farenheit para Celcius.");
    printf("\n\nDigite o valor de inicio (menor que o valor final) em Farenheit (inteiro): ");
    scanf("%d",&T1);
    printf("\n\nDigite o valor final em Farenheit (inteiro): ");
    scanf("%d",&T2);
    Dif=abs(T1-T2);


    for(i=0;i<=Dif;i++)
    {
        F=T1+i;
        C=(float)5*(F-32)/9;
        printf("\nGraus Celsius: %.2f // Graus Farenheit: %d",C,F);
    }

    printf("\n\n");

    system("pause");
    return 0;
}
