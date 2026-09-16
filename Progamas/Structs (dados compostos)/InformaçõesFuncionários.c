#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>
#define maxFunc 100

typedef struct tipo_DataNasc
{
    int dia,mes,ano;
}Date;

typedef struct tipo_InfFunc
{
    char nome[51];
    int age,cod;
    char sexo;
    Date born;
    float sal;
}InfFunc;

void newest(InfFunc pessoa[])
{
    int i,menor=9999999,n;
    for(i=0;i<maxFunc;i++)
    {
        if(pessoa[i].age<menor)
        {
            n=i;
            menor=pessoa[n].age;
        }
    }

    printf("\nNome do funcionário mais novo: %s",pessoa[n].nome);
    printf("\nIdade do funcionário mais novo: %d",pessoa[n].age);
    printf("\nSexo do funcionário mais novo: %c",pessoa[n].sexo);
    printf("\nData de nasc. do funcionário mais novo: %d/%d/%d",pessoa[n].born.dia,pessoa[n].born.mes,pessoa[n].born.ano);
    printf("\nSetor do funcionário mais novo: %d",pessoa[n].cod);
    printf("\nSalário do funcionário mais novo: R$ %.2f\n",pessoa[n].sal);
}

float mediaSalSetor(InfFunc pessoa[],int setor)
{
    int i,cont=0;
    float S=0;
    for(i=0;i<maxFunc;i++)
    {
        if(pessoa[i].cod == setor)
        {
            cont++;
            S+=pessoa[i].sal;
        }
    }

    if(cont==0)
    {
        return -1;
    }
    else
    {
        return (S/cont);
    }
}

int numNascMes(InfFunc pessoa[], int month)
{
    int i,qtd=0;
    for(i=0;i<maxFunc;i++)
    {
        if(pessoa[i].born.mes == month)
        {
            qtd++;
        }
    }
    return qtd;
}

int main()
{
    int c,k,mes,codigo,i,numNasc;
    float mediaSAL;
    InfFunc funcionarios[maxFunc];
    setlocale(LC_ALL,"Portuguese");

    printf("\t\tCADASTRO");
    for(i=0;i<maxFunc;i++)
    {
        while((c = getchar()) != '\n' && c != EOF);
        printf("\nNome do funcionário %d: ",i+1);
        fgets(funcionarios[i].nome,51,stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = '\0';

        do
        {
            printf("\nIdade do funcionário %d (superior ou igual a 18): ",i+1);
            scanf("%d",&funcionarios[i].age);
        }while(funcionarios[i].age<18);

        do
        {
            while((k = getchar()) != '\n' && k != EOF);
            printf("\nSexo do funcionário %d (M ou F): ",i+1);
            funcionarios[i].sexo = getchar();
        }while(toupper(funcionarios[i].sexo)!='M' && toupper(funcionarios[i].sexo)!='F' );

        printf("\nDia de nasc. do funcionário %d: ",i+1);
        scanf("%d",&funcionarios[i].born.dia);
        printf("\nMes de nasc. do funcionário %d: ",i+1);
        scanf("%d",&funcionarios[i].born.mes);
        printf("\nAno de nasc. do funcionário %d: ",i+1);
        scanf("%d",&funcionarios[i].born.ano);

        do
        {
            printf("\nSetor do funcionário %d (código de 0 a 99): ",i+1);
            scanf("%d",&funcionarios[i].cod);
        }while(funcionarios[i].cod<0 || funcionarios[i].cod>99);

        printf("\nSalário do funcionário %d (R$): ",i+1);
        scanf("%f",&funcionarios[i].sal);
        system("cls");
    }

    newest(funcionarios);
    system("pause");
    system("cls");

    printf("\t\tMÉDIA SALARIAL DE SETOR");
    printf("\nSetor a ser analisado: ");
    scanf("%d",&codigo);
    mediaSAL=mediaSalSetor(funcionarios,codigo);
    if(mediaSAL==-1)
    {
        printf("\nNão existem funcionários no setor %d",codigo);
    }
    else
    {
        printf("\nMédia salarial do setor %d: R$ %.2f\n",codigo,mediaSAL);
    }
    system("pause");
    system("cls");

    printf("\t\tNÚMERO DE NASCIMENTOS NO MÊS");
    printf("\nMês a ser analisado: ");
    scanf("%d",&mes);
    numNasc=numNascMes(funcionarios,mes);
    printf("\nNúmero de nascimentos no mês %d: %d\n",mes,numNasc);
    system("pause");
    return 0;
}
