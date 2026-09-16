#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,z;
    printf("\n\nEste programa verifica o pertencimento de um determinado numero 'z' dentro do intervalo 'x' => 'y'.");
    printf("\n\nPor favor, digite um valor para x: ");
    scanf("%d",&x);
    printf("\n\nPor favor, digite um valor para y: ");
    scanf("%d",&y);
    printf("\n\nPor favor, digite um valor para z: ");
    scanf("%d",&z);

    if(x<y)
    {
        if(z>=x && z<=y)
        {
            printf("\n\nO numero %d pertence ao intervalo [%d,%d].\n\n",z,x,y);
        }
        else
        {
            printf("\n\nO numero %d esta fora do intervalo [%d,%d].\n\n",z,x,y);
        }
    }
    else
    {
        printf("\n\nO valor de 'x' deve ser menor que o valor de 'y' para que o intervalo seja corretamente construido.\n\n");
    }
    system("pause");
    return 0;
}
