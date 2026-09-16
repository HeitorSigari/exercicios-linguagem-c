#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define N 50

//Este é um algoritmo de comparação de textos usando a função strcmp().
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char texto[N]={"abcd"};
    char senha[N];
    int ok,pos;

    printf("Digite um texto: ");
    fgets(senha, N, stdin);
    senha[strcspn(senha, "\n")] = '\0'; /* Essa função retorna a posição do primeiro caractere da string que aparece em "\n",
    então com esse valor é possível alterar o \n para o caractere nulo e contornar o problema. */

    pos=strcspn(senha, "\n");
    printf("\n\nPosição do caractere enter: %d",pos);

    ok = strcmp(texto,senha); //A variável ok recebe o valor produzido pela função. Recebe 0 caso as strings sejam estritamente iguais.

    printf("\n\nValor retornado pela função de comparação: %d",ok);

    /* Observação: (bem importante)
    Toda string em C termina com \0
    fgets mantém o ENTER digitado (\n)
    strcmp compara tudo, inclusive \n
    Por isso "abcd" é diferente de "abcd\n" */

    if(ok==0)
    {
        printf("\n\nTextos iguais.\n\n");
    }
    else
    {
        printf("\n\nTextos diferentes.\n\n");
    }

    system("pause");
    return 0;
}
