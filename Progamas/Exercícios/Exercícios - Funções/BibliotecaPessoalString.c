#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>
#define max 51

//Construindo função que determina o tamanho de uma string
int tamanhoStr(char s[])
{
  int i=0,cont=0;
  while(s[i]!='\0')
  {
    i++;
    cont++;
  }
  return cont;
}

//Construindo função que copia uma string para outra
void copia(char destino[], char origem[])
{
  int i;
  for(i=0;origem[i]!='\0';i++)
  {
    destino[i]=origem[i];
  }
  destino[i]='\0'; //Quando o laço para, a variável 'i' já está exatamente na posição em que o \0 deve ser inserido
                   //No caso de copiar palavras maiores para menores, as posições que já estavam reservadas na memória desde a declaração são ocupadas, não há criação de mais posições.
}

//Construindo função que junta(concatena) uma string na outra
void une(char dest[], char sub[])
{
   int i=0,j;
   while(dest[i]!='\0')
   {
       i++;
   }

   for(j=0;sub[j]!='\0';j++)
   {
       dest[i+j]=sub[j];
   }
   dest[i+j]='\0';
}

int main()
{
  setlocale(LC_ALL,"Portuguese");
  char teste[max],teste2[max],teste3[2*max];
  int tam,caso,c;
  do
  {
       printf("Funcao a ser executada (1: tamanho, 2: copiar, 3: concatenacao): ");
       scanf("%d",&caso);
       while((c = getchar()) != '\n' && c != EOF);
  }while(caso<1 || caso>3);

  switch(caso)
  {
      case(1):
          {
                printf("Digite uma palavra: ");
                fgets(teste,max,stdin);
                teste[strcspn(teste, "\n")] = '\0';

                tam=tamanhoStr(teste);
                printf("\nTamanho da palavra lida: %d\n",tam);
                break;
          }

     case(2):
         {
              printf("\nDigite uma palavra: ");
              fgets(teste,max,stdin);
              teste[strcspn(teste, "\n")] = '\0';

              printf("\nDigite outra palavra: ");
              fgets(teste2,max,stdin);
              teste[strcspn(teste2, "\n")] = '\0';

              copia(teste,teste2); //Copia teste 2 para teste
              printf("\nCopiando a segunda palavra para a primeira: %s\n",teste);
              break;
         }

     case(3):
         {
             printf("\nDigite uma palavra: ");
             fgets(teste,max,stdin);
             teste[strcspn(teste, "\n")] = '\0';

             printf("\nDigite outra palavra: ");
             fgets(teste3,max,stdin);
             teste3[strcspn(teste3, "\n")] = '\0';

             une(teste3,teste);
             printf("\nJuntando a primeira palavra na segunda palavra: %s\n",teste3);
             break;
         }
  }

  system("pause");
  return 0;
}
