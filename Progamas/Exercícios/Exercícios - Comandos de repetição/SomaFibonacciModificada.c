#include<stdio.h>
#include<stdlib.h>
int main()
{
  int atual,ant1,ant2,soma,cont,N; /*A variavel cont indica a posicao atual do termo*/

  printf("\n\nEste progama calcula a soma da sequencia de Fibonacci para N termos, e que inicia em 2.");
  do
  {
    printf("\n\nDigite a quantidade de termos: ");
    scanf("%d",&N);
  } while(N<1);

  if(N==1)
  {
    soma=2;
  }
  else
  {
    soma=5;
    ant2=2;
    ant1=3;
  }

  for(cont=3;cont<=N;cont++)
  {
    atual=ant2+ant1;
    soma=soma+atual;
    ant2=ant1;
    ant1=atual;
  }

  printf("\n\nO valor total da soma e igual a: %d\n\n",soma);

  system("pause");
  return 0;
}
