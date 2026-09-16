#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define maxProd 10

typedef struct tipo_produto
{
    int code,qtd;
    float Pcompra,Pvenda;
}Tprod;

int MaiorEstoque(Tprod prod[])
{
    int i,maior=-9999999,n;
    for(i=0;i<maxProd;i++)
    {
        if(prod[i].qtd>maior)
        {
            n=i;
            maior=prod[n].qtd;
        }
    }
    return prod[n].code;
}

int EstoqueMaiorLucro(Tprod prod[])
{
    float lucro=-9999999;
    int i,k;
    for(i=0;i<maxProd;i++)
    {
        if((prod[i].Pvenda - prod[i].Pcompra) > lucro)
        {
            k=i;
            lucro=(prod[k].Pvenda - prod[k].Pcompra);
        }
    }
    return prod[k].qtd;
}

int main()
{
    int codigo,Q,i;
    Tprod produtos[maxProd];
    setlocale(LC_ALL,"Portuguese");

    printf("\t\tCATÁLOGO DE PRODUTOS");
    for(i=0;i<maxProd;i++)
    {
        printf("\nCódigo do produto %d (3 dígitos): ",i+1);
        scanf("%d",&produtos[i].code);
        printf("\nQuantidade em estoque do produto %d: ",i+1);
        scanf("%d",&produtos[i].qtd);
        printf("\nPreco de venda do produto %d (R$): ",i+1);
        scanf("%d",&produtos[i].Pvenda);
        printf("\nPreco de compra do produto %d (R$): ",i+1);
        scanf("%d",&produtos[i].Pcompra);
        system("cls");
    }

    codigo=MaiorEstoque(produtos);
    Q=EstoqueMaiorLucro(produtos);
    printf("\nCódigo do produto com a maior quantidade em estoque: %d",codigo);
    printf("\nQuantidade em estoque do produto que oferece o maior lucro: %d",Q);
    printf("\n\n");
    system("pause");
    return 0;
}
