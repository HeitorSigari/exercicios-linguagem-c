#include<stdio.h>
#include<stdlib.h>

int main()
{
    float v,d,t,c,a=12;

    printf("\n\nEste programa calcula a quantidade de combustivel consumida em uma viagem, dada a autonomia do automovel (em km/l) e alguns dados sobre a viagem.");
    printf("\n\nPor favor, informe o tempo gasto para concluir o percuso (em horas): ");
    scanf("%f",&t);

    printf("\n\nPor favor, informe a velocidade media imprimida durante o percurso (em km/h): ");
    scanf("%f",&v);

    d=v*t;

    c=d/a;

    printf("\n\nPara uma autonomia de 12 km/l, segundo os dados informados, o automovel tera gasto, nessa viagem, %.2f l de combustivel.\n\n",c);

    system("pause");
    return 0;
}
