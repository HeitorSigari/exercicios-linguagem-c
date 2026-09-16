#include<stdio.h>
#include<stdlib.h>
#define tam 15

int main()
{
  int i,j,V[tam],aux;

  for(i=0;i<tam;i++)
  {
    printf("\nDigite o valor de V[%d]: ",i);
    scanf("%d",&V[i]);
  }

  printf("\nvetor V: [ ");
  for(i=0;i<tam;i++)
  {
    printf("%d ",V[i]);
  }
  printf("]");

  for(i=0;i<tam-1;i++)
  {
    for(j=i+1;j<tam;j++)
    {
      if(V[i]>V[j])
      {
        aux=V[j];
        V[j]=V[i];
        V[i]=aux;
      }
    }
  }

  printf("\n\nvetor V em ordem crescente: [ ");
  for(i=0;i<tam;i++)
  {
    printf("%d ",V[i]);
  }
  printf("]\n\n");

  system("pause");
  return 0;
}
