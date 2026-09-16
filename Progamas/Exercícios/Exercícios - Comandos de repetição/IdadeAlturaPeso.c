#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k,N50=0,I,qntdALT=0,MenorP=0;
    float Med,perc,peso,ALT,somaALT=0;

    printf("\n\n\t\tCOLETA DE DADOS SOBRE 10 PESSOAS\n\n");

    for(k=1;k<=10;k++)
    {
        do
        {
            printf("\n\tDigite a idade (positiva nao nula): ");
            scanf("%d",&I);
        }
        while(I<=0);

        do
        {
            printf("\n\tDigite a altura (positiva nao nula e em centimetros): ");
            scanf("%f",&ALT);
        }
        while(ALT<=0);


        if(I>50)
        {
           N50++;
        }
        else
        {
            if(I>=10)
            {
                if(I<=20)
                {
                    somaALT+=ALT;
                    qntdALT++;
                }
            }
        }

        do
        {
            printf("\n\tDigite o peso (positivo nao nulo): ");
            scanf("%f",&peso);
        }
        while(peso<=0);

        if(peso<50)
        {
            MenorP++;
        }
    }

    /*COMANDOS APÓS O LAÇO*/

    if(qntdALT>0)
    {
        Med=somaALT/(float)qntdALT;
    }
    else
    {
        Med=0;
    }

    perc=((float)MenorP/10.0)*100;

    printf("\n\n\tQuantidade de pessoas com idade superior a 50 anos: %d pessoas.",N50);
    printf("\n\n\tPercentual de pessoas com peso inferior a 50KG: %.2f%%.",perc);
    printf("\n\n\tMedia das alturas das pessoas com idade entre 10 e 20 anos: %.2f\n\n",Med);

    system("pause");
    return 0;
}
