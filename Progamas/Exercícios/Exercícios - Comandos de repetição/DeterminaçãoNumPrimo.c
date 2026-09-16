#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,r,i,sim=1; /*Declaramos a variável sim para estabalecer um parâmetro de comparação*/
    printf("\n\nEste algoritmo pode ser usado para determinar se um numero nao nulo e ou nao classificado como primo.\n\n");

    do
    {
        printf("Digite um numero maior que 1: ");
        scanf("%d",&num);
    }
    while(num<=1);

    for(i=2;i<num;i++) /*No caso de num=2, o programa continua retornando que o mesmo é primo, já que logo na primeira comparação (2<2) obtemos o caso falso,
    então o bloco de comandos do for é ignorado e a variável de comparação continua valendo 1, retornando que 2 é de fato primo.*/
    {
        r=num%i; /*Testamos todas as divisões sucessivas de i=2 até i=num-1*/
        if(r==0)
        {
            sim=0;
            break; /*O break finaliza o laço do for e imediatamente passa para o comando seguinte fora do laço*/
        }
    }

    if(sim==1)
    {
        printf("\n\nO numero %d e primo.\n\n",num);
    }
    else
    {
        printf("\n\nO numero %d nao e primo.\n\n",num);
    }

    system("pause");
    return 0;
}


