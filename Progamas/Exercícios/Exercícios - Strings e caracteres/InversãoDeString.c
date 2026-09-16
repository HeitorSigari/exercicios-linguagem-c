#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define max 51

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char orig[max],inv[max],aux;
    int i,n,c; //É preciso declarar a variav. c como int para que EOF, retornado pelo getchar, também possa ser armazenado.

    printf("Digite uma palavra de até 50 caracteres: ");
    fgets(orig,max,stdin);
    if(orig[strcspn(orig, "\n")] == '\n')
    {
      orig[strcspn(orig, "\n")] = '\0'; //Se \n foi lido não é necessário limpar o Buffer
    }
    else //No caso de estouro, strcspn retorna o tamanho da string (strlen), isto é, a posição do caractere nulo '\0', o que significa que não houve leitura de /n
    {
      while((c=getchar()) != '\n' && c != EOF); //Se \n não foi lido, então significa que houve estouro do limite, e portanto o Buffer precisa ser limpo.
    }
    //Para limpar o buffer de entrada queremos apenas que os caracteres restantes sejam lidos,
    //então não é preciso colocar nada no bloco de comandos do while (é o que o ';' permite)



    n=strlen(orig); //Dessa forma, o laço percorrerá todos os caracteres úteis da string, já que a última posíção é n-1
    for(i=0;i<n;i++)
    {
        inv[n-1-i]=orig[i];
    }
    inv[n]='\0'; /*É preciso colocar o caracter nulo na string invertida,
                pois durante o laço de inversão ele nem sequer foi acessado, portanto nada foi atribuído à posição que o programa esperaria encontrar o '\0' e finalizar a leitura.*/

    printf("\n\nPalavra digitada: %s",orig);
    printf("\n\nPalavra invertida: %s\n\n",inv);

    system("pause");
    return 0;
}
