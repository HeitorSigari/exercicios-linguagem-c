#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>
#define max 11



int main()
{
    char pal[max],vog[max];
    int i,k,n;
    setlocale(LC_ALL,"Portuguese");
    printf("\n\nDigite uma palavra de até 10 caracteres: ");
    fgets(pal,max,stdin);
    k=strcspn(pal,"\n");
    if(pal[k]=='\n')
    {
        pal[k]='\0';
    }
    else
    {
        int c;
        while((c=getchar())!='\n' && c!=EOF);
    }

    n=strlen(pal);
    for(i=0;i<n;i++)
    {
        char ch=pal[i];
        if(tolower(ch)!='a' && tolower(ch)!='e' && tolower(ch)!='i' && tolower(ch)!='o' && tolower(ch)!='u')
        {
            vog[i]=pal[i];
        }
        else
        {
            vog[i]='_';
        }
    }
    vog[n]='\0';

    printf("\nPalavra digitada: %s",pal);
    printf("\n\nPalavra sem as suas vogais: %s\n\n",vog);

    system("pause");
    return 0;
}
