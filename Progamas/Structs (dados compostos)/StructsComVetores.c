#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#define TAM 3

void limpa_buf()
{
    int c;
    while((c=getchar())!='\n' && c!=EOF);
}

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    tipo_pessoa lista[TAM]; //Cada posição do vetor tipo tipo_pessoa é uma variável com seus respectivos campos.
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("\nInsira os dados (%d):\n",i+1);
        printf("Nome: ");
        fgets(lista[i].nome,50,stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0'; //Substituindo o \n no final da string para evitar problemas


        printf("\nIdade: \n");
        scanf("%d",&lista[i].idade);

        printf("\nPeso: \n");
        scanf("%f",&lista[i].peso);
        limpa_buf(); //É preciso limpar o buffer no final de todos os scanf para que o fgets no próximo laço não leia o \n e imprima uma string vazia.
    }
    system("cls");

    printf("Dados inseridos:\n");
    for(i=0;i<TAM;i++)
    {
        printf("-------- Pessoa %d --------\n",i+1);
        printf("\tNome: %s\n",lista[i].nome);
        printf("\tIdade: %d\n",lista[i].idade);
        printf("\tPeso: %.2f\n",lista[i].peso);
    }

    system("pause");
    return 0;
}
