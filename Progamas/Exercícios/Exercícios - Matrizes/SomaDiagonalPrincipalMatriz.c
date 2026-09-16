#include<stdio.h>

int main()
{
  float M[4][4],S=0;
  int i,j;
  
  printf("\n\n");
  for(i=0;i<4;i++)
  {
    printf("\n\nDigite um valor para o elemento M[%d][%d]: ",i,i); 
    scanf("%f",&M[i][i]);
  }  
  
  for(i=0;i<4;i++)
  {
    S+=M[i][i];
  }  
  
  printf("\n\nSoma dos elementos da diagonal principal: %.2f",S);
  
  return 0;
  
}  