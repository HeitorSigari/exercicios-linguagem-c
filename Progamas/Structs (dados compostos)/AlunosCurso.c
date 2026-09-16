#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct tipo_aluno
{
    int RA,n1,n2,n3;
    char nome[50];
}tipo_aluno;

void input_dados(tipo_aluno est[])
{
    int i,c;
    for(i=0;i<5;i++)
    {
        printf("\nRA do aluno %d: ",i+1);
        scanf("%d",&est[i].RA);
        printf("\nNota da prova 1: ");
        scanf("%d",&est[i].n1);
        printf("\nNota da prova 2: ");
        scanf("%d",&est[i].n2);
        printf("\nNota da prova 3: ");
        scanf("%d",&est[i].n3);

        while((c = getchar()) != '\n' && c != EOF); //É preciso limpar o buffer de entrada para que o fgets não leia o \n que sobra após o scanf.
        printf("\nNome do aluno %d: ",i+1);
        fgets(est[i].nome,50,stdin);
        est[i].nome[strcspn(est[i].nome, "\n")] = '\0';
        system("cls");
    }
}

int maiorNota1(tipo_aluno est[])
{
    int i,Maior=-999999,posM;
    for(i=0;i<5;i++)
    {
        if(est[i].n1>Maior)
        {
            Maior=est[i].n1;
            posM=i;
        }
    }
    return posM;
}

int maiorMedia(tipo_aluno est[])
{
    int i,posM;
    float k,med=-999999;
    for(i=0;i<5;i++)
    {
        k = (float)(est[i].n1+est[i].n2+est[i].n3)/3;
        if(k>med)
        {
            med=k;
            posM=i;
        }
    }
    return posM;
}

int menorMedia(tipo_aluno est[])
{
    int i,posM;
    float k,med=999999;
    for(i=0;i<5;i++)
    {
        k = (float)(est[i].n1+est[i].n2+est[i].n3)/3;
        if(k<med)
        {
            med=k;
            posM=i;
        }
    }
    return posM;
}

void aprovacao(tipo_aluno est[])
{
    int i;
    float media;
    for(i=0;i<5;i++)
    {
        media = (float)(est[i].n1+est[i].n2+est[i].n3)/3;
        if(media>6)
        {
            printf("\nO aluno %s, portador do RA %d, foi aprovado.\n",est[i].nome,est[i].RA);
        }
        else
        {
            printf("\nO aluno %s, portador do RA %d, foi reprovado.\n",est[i].nome,est[i].RA);
        }
    }
}

int main()
{
    tipo_aluno estudante[5];
    int nota1,med_maior,med_menor;
    printf("\t\tINSERCAO DE DADOS\n");
    input_dados(estudante);

    //Maior nota prova 1
    nota1=maiorNota1(estudante);
    printf("\nAluno com a maior nota na primeira prova: %s\n",estudante[nota1].nome);
    system("pause");

    //Maior média geral
    med_maior=maiorMedia(estudante);
    printf("\nAluno com a maior media geral: %s\n",estudante[med_maior].nome);
    system("pause");

    //Menor média geral
    med_menor=menorMedia(estudante);
    printf("\nAluno com a menor media geral: %s\n",estudante[med_menor].nome);
    system("pause");
    system("cls");

    //Aprovações
    printf("\t\tAPROVACOES\n");
    aprovacao(estudante);

    system("pause");
    return 0;
}
