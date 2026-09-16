#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define maxHab 3
#define salMin 1621.00

typedef struct dados
{
    int idade,filhos,sexo;
    float salario;
}dados;

float MediaSalarial(dados pop[])
{
    int i,cont=0;
    float S=0;
    for(i=0;i<maxHab;i++)
    {
        cont++;
        S+=pop[i].salario;
    }
    return (S/cont);
}

float MediaFilhos(dados pop[])
{
    int i,cont=0,S=0;
    for(i=0;i<maxHab;i++)
    {
        if(pop[i].filhos!=0)
        {
            cont++;
            S+=pop[i].filhos;
        }
    }
    if(cont==0)
    {
        return -1;
    }
    else
    {
        return ((float)S/cont);
    }
}

float MedAgeFemMenorSal(dados pop[])
{
    int i,cont=0,S=0;
    for(i=0;i<maxHab;i++)
    {
        if(pop[i].sexo==2)
        {
            if(pop[i].salario<salMin)
            {
                cont++;
                S+=pop[i].idade;
            }
        }
    }
    if(cont==0)
    {
        return -1;
    }
    else
    {
        return ((float)S/cont);
    }
}

int main()
{
    dados VetHab[maxHab];
    int i;
    float MedIdade,MedFilhos,MedSal;
    setlocale(LC_ALL,"Portuguese");

    for(i=0;i<maxHab;i++)
    {
        printf("\t\tCOLETA DE DADOS\n");
        do
        {
            printf("\nIdade da pessoa %d: ",i+1);
            scanf("%d",&VetHab[i].idade);
        }while(VetHab[i].idade<0);

        do
        {
            printf("\nSexo da pessoa %d (1=Masc, 2=Fem): ",i+1);
            scanf("%d",&VetHab[i].sexo);
        }while(VetHab[i].sexo!=1 && VetHab[i].sexo!=2 );

        do
        {
            printf("\nNúmero de filhos da pessoa %d: ",i+1);
            scanf("%d",&VetHab[i].filhos);
        }while(VetHab[i].filhos<0);

        do
        {
            printf("\nSalário da pessoa %d (R$): ",i+1);
            scanf("%f",&VetHab[i].salario);
        }while(VetHab[i].salario<0);
        system("cls");
    }

    MedSal=MediaSalarial(VetHab);
    MedFilhos=MediaFilhos(VetHab);
    MedIdade=MedAgeFemMenorSal(VetHab);

    printf("\t\tRESULTADOS RELACIONADOS AOS HABITANTES\n");
    printf("\nMédia salarial dos habitantes: R$ %.2f",MedSal);

    if(MedFilhos==-1)
    {
        printf("\nNão há filhos entre os habitantes contados para calcular a média.");
    }
    else
    {
        printf("\nMédia do número de filhos dos habitantes: %.2f",MedFilhos);
    }

    if(MedIdade==-1)
    {
        printf("\nNão há mulheres com salário inferior ao mínimo entre os habitantes contados.\n\n");
    }
    else
    {
        printf("\nMédia de idade das mulheres com salário inferior ao mínimo: %.2f\n\n",MedIdade);
    }

    system("pause");
    return 0;
}
