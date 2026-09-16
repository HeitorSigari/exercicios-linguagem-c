#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>
#define max 101

int main()
{
    char nome[max],iniciais[max];
    int i,j,n,k;

    setlocale(LC_ALL,"Portuguese");
    printf("\n\nDigite um nome de até 100 caracteres: ");
    fgets(nome,max,stdin);
    k=strcspn(nome,"\n");
    if(nome[k]=='\n')
    {
        nome[k]='\0';
    }
    else
    {
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    i = 0;
    while(nome[i]==' ')
    {
      i++;
    }
    iniciais[0] = toupper(nome[i]); //Com a adição desses "while", a lógica do programa agora é: se achar espaço, pule todos os espaços e pegue a próxima letra.
    j = 1;

    n=strlen(nome);
    i++;
    for(;i<n;i++)
    {
        if(nome[i]==' ')
        {
            while(nome[i]==' ')
            {
              i++;
            }
            iniciais[j]=toupper(nome[i]);
            j++;
        }
    }
    iniciais[j]='\0';

    printf("\nNome completo: %s",nome);
    printf("\n\nIniciais: %s\n\n",iniciais);

    system("pause");
    return 0;
}
