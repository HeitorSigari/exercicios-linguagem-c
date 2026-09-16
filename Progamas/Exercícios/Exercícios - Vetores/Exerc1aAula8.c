#include<stdlib.h>
#include<stdio.h>

int main()
{
    int i;
    float V[10],maior=-999999;

    printf("\n\nEste algoritmo realiza a leitura de 10 numeros inseridos e determina qual o maior dentre eles.");

    for(i=0;i<10;i++)
    {
        printf("\nDigite um numero: ");
        scanf("%f",&V[i]);

        if(V[i]>maior)
        {
            maior=V[i];
        }
    }

    printf("\n\nMaior valor inserido: %.1f\n\n",maior);

    system("pause");
    return 0;
}
