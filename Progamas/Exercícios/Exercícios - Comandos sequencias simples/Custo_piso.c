#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Larg,Comp,Area,P_material,Custo;
    printf("\n\n\tEste programa calcula o custo de forrar uma superficie plana, em R$, dadas as medidas de sua largura e comprimento, em metros, bem como o preco por metro quadrado do material a ser usado.");
    printf("\n\n\tInforme a medida da largura:  ");
    scanf("%f",&Larg);
    printf("\n\n\tInforme a medida do comprimento: ");
    scanf("%f",&Comp);
    printf("\n\n\tInforme o preco por metro quadrado do material: ");
    scanf("%f",&P_material);
    Area = Larg*Comp;
    Custo = Area*P_material;
    printf("\n\n\tO Custo de forragem, baseado nos dados fornecidos, e igual: %f R$\n\n\t",Custo);
    return 0;

}
