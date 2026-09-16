#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define tam 11

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char S[tam],C;
    int i,cont=0;

    printf("Digite uma palavra (tamanho máximo de 10 letras): ");
    fflush(stdin);
    fgets(S,tam,stdin);
    printf("\n\n");

    printf("Digite uma letra para análise (maiúsculas e minúsculas são distintas): ");
    fflush(stdin);
    C=getchar();

    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]==C)
        {
            cont++;
        }
    }

    if(cont>1)
    {
        printf("\n\nA letra '%c' aparece %d vezes na palavra %s.",C,cont,S);
    }
    else
    {
        printf("\n\nA letra '%c' aparece uma única vez na palavra %s.",C,S);
    }
    system("pause");
    return 0;
}
