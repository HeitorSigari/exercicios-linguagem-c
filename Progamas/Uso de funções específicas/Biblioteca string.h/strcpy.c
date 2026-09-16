#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define N 20

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char destino[N];
    char origem[N] = {"Olá, mundo!!"};

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    printf("\n\nDepois do strcpy:\n"); //Envia o conteúdo da string de origem à string de destino.
    strcpy(destino,origem);
    puts(origem);
    puts(destino);

    system("pause");
    return 0;
}
