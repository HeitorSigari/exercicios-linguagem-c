#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX 21

void substituiCaractere(char str[], char a, char b, int i)
{
    //Leitura em ordem crescente dos indices
    if(i!=0){
        substituiCaractere(str,a,b,i-1);
    }
    if(str[i]==b){
        str[i]=a;
    }
}

int main()
{
    char string[MAX],a,b;
    int c;
    printf("Palavra desejada: ");
    fgets(string,MAX,stdin);
    string[strcspn(string,"\n")] = '\0';

    printf("\n\nCaractere a ser implantado: ");
    a=getchar();

    while((c=getchar()) != '\n' && c != EOF);
    printf("\n\nCaractere a ser substituido: ");
    b=getchar();

    substituiCaractere(string,a,b,strlen(string)-1);
    printf("\n\nPalavra com os caracteres substituidos: %s",string);
    printf("\n\n");

    system("pause");
    return 0;
}
