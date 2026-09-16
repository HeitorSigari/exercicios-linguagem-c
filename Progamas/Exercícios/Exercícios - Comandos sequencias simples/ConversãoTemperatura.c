#include<stdio.h>
#include<stdlib.h>

int main()
{
    float C,F;

    printf("\n\nEste programa converte uma determinada temperatura em graus Farenheit para graus Celsius.");
    printf("\n\nPor favor, digite a temperatura em Farenheit: ");
    scanf("%f",&F);

    C = (F-32)*5/9;

    printf("\n\nA temperatura correspondente a %.2f graus farenheit, em graus celsius, e igual a: %.2f.\n\n",F,C);

    system("pause");
    return 0;
}
