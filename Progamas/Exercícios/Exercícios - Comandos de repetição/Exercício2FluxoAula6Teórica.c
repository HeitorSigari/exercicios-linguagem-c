#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,dobro;

    for(;;)
    {
        printf("\nDigite um numero: ");
        scanf("%d",&num);
        if(num<0)
        {
            break; /*Caso o break não for colocado, o programa nunca sairá de dentro do for, pois não há nenhuma variável sendo incrementada e comparada, portanto o laço seria infinito*/
        }
        else
        {
            if(num!=0)
            {
                dobro=2*num;
                printf("\nO dobro de %d e: %d\n",num,dobro);
            }
            else
            {
                printf("\nZero nao possui dobro.\n");
            }
        }
    }
    printf("\n\nPrograma finalizado.\n");
    system("pause");
    return 0;
}
