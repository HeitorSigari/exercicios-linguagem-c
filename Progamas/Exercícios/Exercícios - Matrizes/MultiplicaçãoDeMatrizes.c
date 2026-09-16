#include<stdio.h>
#include<stdlib.h>
#define tam 3

int main()
{
  int A[tam][tam],B[tam][tam],C[tam][tam],i,j,m,n;

  for(i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      m=0;
      n=0;
      m=i+1;
      n=j+1;
      printf("\nDefina o elemento A[%d][%d]: ",m,n);
      scanf("%d",&A[i][j]);

      printf("\nDefina o elemento B[%d][%d]: ",m,n);
      scanf("%d",&B[i][j]);
    }
  }

  printf("\n\nMatriz A:\n");
  for(i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      printf(" %d",A[i][j]);
    }
    printf("\n");
  }

  printf("\n\nMatriz B:\n");
  for(i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      printf(" %d",B[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j];
    }
  }

  printf("\n\nMatriz C:\n");
  for(i=0;i<tam;i++)
  {
    for(j=0;j<tam;j++)
    {
      printf(" %d",C[i][j]);
    }
    printf("\n");
  }

  system("pause");
  return 0;
}
