#include<stdio.h>
#include<stdlib.h>

int main()
{
    float p1,p2,p3;
    printf("\n\nEste algoritmo foi desenvolvido para selecionar qual escolha deve ser feita, dentre precos de produtos, pensando em economizar. Por favor, insira somente precos distintos.");

    printf("\n\nQual o preco do primeiro produto? (em R$)  ");
    scanf("%f",&p1);

    printf("\n\nQual o preco do segundo produto? (em R$) ");
    scanf("%f",&p2);

    printf("\n\nQual o preco do terceiro produto? (em R$) ");
    scanf("%f",&p3);

    if(p1<p2 && p1<p3)
    {
        printf("\n\nA melhor opcao a ser escolhida, pensando estritamente em custo, e o produto 1. No entando, sempre considere a qualidade e longevidade!\n\n");
    }
    else
    {
        if(p2<p1 && p2<p3)
        {
            printf("\n\nA melhor opcao a ser escolhida, pensando estritamente em custo, e o produto 2. No entando, sempre considere a qualidade e longevidade!\n\n");
        }
        else
        {
            printf("\n\nA melhor opcao a ser escolhida, pensando estritamente em custo, e o produto 3. No entando, sempre considere a qualidade e a longevidade do mesmo!\n\n");
        }
    }

    /*Quando o programa chega no último else, sabemos que: p1 NÃO é menor que os dois E p2 NÃO é menor que os dois.
    Se os preços são todos distintos, só sobra uma possibilidade lógica: p3 é o menor. Por isso, não é necessário mais um if no último Else.
    Isso vem da exclusão lógica*/

    system("pause");
    return 0;
}
