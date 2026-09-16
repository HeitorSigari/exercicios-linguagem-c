#include<stdlib.h>
#include<stdio.h>

int main()
{
    float comp,larg,Ctotal,Mtela,perim;
    printf("\n\nEste programa pode ser utilizado para calcular o custo total de cercamento de um terreno retangular ou quadrado.");
    printf("\n\nPor favor, informe o preco do metro da tela (em R$/metro): ");
    scanf("%f",&Mtela);

    printf("\n\nPor favor, informe o comprimento do terreno (em metros): ");
    scanf("%f",&comp);

    printf("\n\nPor favor, informe a largura do terreno (em metros): ");
    scanf("%f",&larg);

    perim = (2*larg) + (2*comp);
    Ctotal = Mtela*perim;

    printf("\n\nO custo total para cercar o terreno, com base nos dados forenecidos, sera de: R$ %.2f.\n\n",Ctotal);

    system("pause");
    return 0;
}
