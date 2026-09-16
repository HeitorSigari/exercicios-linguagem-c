#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#define TAM 50

struct tipo_pessoa
{
    int idade;
    float peso;         //Campos do novo tipo de dado
    char nome[TAM];
};


typedef struct tipo_pessoa tipo_pessoa; //Renomeando o novo tipo de dado criado (de nome "struct tipo_pessoa")  para apenas tipo_pessoa.

int main()
{
    setlocale(LC_ALL,"Portuguese");

    tipo_pessoa pes = {0, 0.00, "Teste"}; //Criando e inicializando os campos da variável struct do tipo tipo_pessoa

    printf("\nInício:\n");
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);
    printf("pes.nome: %s\n",pes.nome);

    //Atribuindo valores aos campos

    pes.idade=10;
    pes.peso=99.99;
    strcpy(pes.nome,"Texto");

    printf("\nAlterando os campos via código:\n");
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);
    printf("pes.nome: %s\n",pes.nome);

    //Solicitando incerções via teclado

    printf("\nInsira um número inteiro: ");
    scanf("%d",&pes.idade);
    printf("\nInsira um número real: ");
    scanf("%f",&pes.peso);
    printf("\nInsira uma palavra: ");
    scanf("%s",&pes.nome);

    printf("\nAlterando com dados do usuário:\n");
    printf("pes.idade: %d\n",pes.idade);
    printf("pes.peso: %.2f\n",pes.peso);
    printf("pes.nome: %s\n",pes.nome);

    system("pause");
    return 0;
}
