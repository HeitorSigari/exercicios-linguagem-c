#include<stdio.h>
#include<stdlib.h>
#define tam 3

int main()
{
  int A[tam][tam],B[tam][tam],V_linha[tam],s_linha=0,M_coluna[tam],somaD=0,npares=0,maiorsec=-999999,i,j,maior_col=-999999;

  for(i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      do
      {
          printf("\nDigite o valor (positivo) de A[%d][%d]: ",i,j);
          scanf("%d",&A[i][j]);
      }while(A[i][j]<0);

      if(i+j==tam-1)
      {
          if(A[i][j]>maiorsec)
          {
              maiorsec=A[i][j];
          }
      }

      if(A[i][j]!=0)
      {
        if(A[i][j]%2==0)
        {
            npares++;
        }
      }

      B[j][i]=A[i][j];

      s_linha+=A[i][j];
    }

    somaD+=A[i][i];

    V_linha[i]=s_linha;
    s_linha=0;
  }

  for(j=0;j<tam;j++)
  {
    for(i=0;i<tam;i++)
    {
      if(A[i][j]>maior_col)
      {
        maior_col=A[i][j];
      }
    }
    M_coluna[j]=maior_col;
    maior_col=-999999;
  }

  printf("\n\nMatriz A:\n");
  for(i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz transposta:\n");
  for(i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      printf("%d ",B[i][j]);
    }
    printf("\n");
  }

  printf("\nSoma de cada linha da matriz A: [ ");
  for(i=0;i<tam;i++)
  {
    printf("%d ",V_linha[i]);
  }
  printf("]");

  printf("\n\nMaiores valores de cada coluna da matriz A: [ ");
  for(i=0;i<tam;i++)
  {
    printf("%d ",M_coluna[i]);
  }
  printf("]");

  printf("\n\nSoma dos valores da diagonal principal: %d",somaD);
  printf("\n\nQuantidade de numeros pares: %d",npares);
  printf("\n\n Maior valor da diagonal secundaria: %d\n\n",maiorsec);

  system("pause");
  return 0;
}
