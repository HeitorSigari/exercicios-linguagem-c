#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define tam1 13
#define tam2 25

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[tam1],sobrenome[tam1],completo[tam2],P,U;
    int c,i,n,k;

    printf("Digite seu nome (maximo de 12 letras): ");
    fgets(nome,tam1,stdin);
    k = strcspn(nome,"\n");
    if(nome[k] == '\n')
    {
      nome[k] = '\0';
    }
    else
    {
      while((c=getchar()) != '\n' && c != EOF);
    }

    printf("Digite seu sobrenome (maximo de 12 letras): ");
    fgets(sobrenome,tam1,stdin);
    k = strcspn(sobrenome,"\n");
    if(sobrenome[k] == '\n')
    {
      sobrenome[k] = '\0';
    }
    else
    {
      while((c=getchar()) != '\n' && c != EOF);
    }

    //LEMBRANDO: Se n=strlen(s), então s[n−1] é o último caractere e s[n]=\0, pois índice e comprimento não são a mesma coisa

    strcpy(completo, nome);
    strcat(completo, sobrenome);
    P=completo[0];
    n = strlen(completo);
    U=completo[n-1];

    printf("Nome completo: %s",completo);
    printf("\n\nQuantidade de letras: %d",n);
    printf("\n\nPrimeira letra: %c",P);
    printf("\n\nÚltima letra: %c\n\n",U);

    system("pause");
    return 0;
}
