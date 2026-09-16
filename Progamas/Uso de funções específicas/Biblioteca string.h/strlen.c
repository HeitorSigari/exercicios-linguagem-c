#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define N 50

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    char s[N];

    printf("Digite um texto: ");
    fgets(s,N,stdin);
    s[strcspn(s, "\n")] = '\0';
    i=strlen(s); //A variável i armazena o valor produzido pela função (tamanho da string)
    printf("\nTamanho do texto: %d\n\n",i);

    printf("Impressão de posição a posição: "); //O resultado é o mesmo utilizando puts(s).
    for(i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}
