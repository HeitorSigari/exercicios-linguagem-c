#include<stdio.h>
#include<stdlib.h>

int main()
{
    int V,M,Vex;
    printf("\n\nEste algoritmo pode ser usado para calcular uma multa por excesso de velocidade, considerando a velocidade limite como 110 km/h.");
    printf("\n\nEspecificacoes da multa: R$ 5,00 para cada km/h acima do limite.");
    printf("\n\nForneca a velocidade do veiculo em questao (em km/h): ");
    scanf("%d",&V);

    Vex = abs(V)-110; /* A função "abs()" calcula o módulo (valor absoluti) de V*/

    if(Vex>0)
    {
        M = Vex*5;
        printf("\n\nMultado! O valor da multa e igual a R$ %d,00.\n\n",M);
    }
    else
    {
        printf("\n\nO veiculo esta dentro do limite de velocidade.\n\n");
    }
    system("pause");
    return 0;
}
