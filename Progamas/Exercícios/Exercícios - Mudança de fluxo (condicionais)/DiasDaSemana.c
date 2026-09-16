#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("\n\nEste programa informa o dia da semana, baseado no numero de 1 a 7 correspondente.");
    printf("\n\nPor favor, digite o numero: ");
    scanf("%d",&num);

    switch(num)
    {
    case 1:
        printf("\n\nHoje e domingo!\n\n");
        break;
    case 2:
        printf("\n\nHoje e segunda-feira!\n\n");
        break;
    case 3:
        printf("\n\nHoje e terca-feira!\n\n");
        break;
    case 4:
        printf("\n\nHoje e quarta-feira!\n\n");
        break;
    case 5:
        printf("\n\nHoje e quinta-feira!\n\n");
        break;
    case 6:
        printf("\n\nHoje e sexta-feira!\n\n");
        break;
    case 7:
        printf("\n\nHoje e sabado!\n\n");
        break;
    default:
        printf("\n\nValor invalido, por favor obedeca a restricao.\n\n");
        break;
    }
    system("Pause");
    return 0;
}
