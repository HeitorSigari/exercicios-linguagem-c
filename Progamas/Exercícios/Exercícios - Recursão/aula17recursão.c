#include<stdio.h>
#include<stdlib.h>

//Exercicios aula 17 recursao

int Ex4(int N)
{
  if(N==1)
  {
    return 1;
  }
  return N*N + Ex4(N-1);
}

void Ex5(int N)
{
  if(N>0){ Ex5(N-1);
  }
  printf(" %d",N);
}

void Ex6(int N)
{
  printf(" %d",N);
  if(N>0){ Ex6(N-1);
  }
}

int main()
{
  int a,b,c,soma;

  printf("\n\n\t\tSOMA DE 1*1 DE 1 A ATE N");
  printf("\n\nValor de N desejado: ");
  scanf("%d",&a);
  soma=Ex4(a);
  printf("Resultado da soma: %d",soma);

  printf("\n\n\t\tNATURAIS DE 0 ATE N ORDEM CRESCENTE");
  printf("\nValor de N desejado: ");
  scanf("%d",&b);
  printf("\n");
  Ex5(b);

  printf("\n\n\t\tNATURAIS DE 0 ATE N ORDEM DECRESCENTE");
  printf("\n\nValor de N desejado: ");
  scanf("%d",&c);
  printf("\n");
  Ex6(c);

  system("pause");
  return 0;
}
