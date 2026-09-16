#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define N 50

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char s1[N]={"Lógica de"};
    char s2[N]={" Programação!"};

    printf("Antes do strcat:\n");
    printf("String 1: %s\n",s1);
    printf("String 2: %s\n",s2);

    strcat(s1,s2); //O contéudo de s2 será imendado ao conteúdo de s1 e o resultado ficará em s1
    printf("\nDepois do strcat:\n");
    puts(s1);

    system("pause");
    return 0;
}
