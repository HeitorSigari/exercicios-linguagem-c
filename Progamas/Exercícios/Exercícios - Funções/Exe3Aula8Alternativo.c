#include<stdio.h>
#include<stdlib.h>

void calculo(float x, float y, float z, float *r)
{
  *r=(x*x)+y+z;
}

int main()
{
  float a,b,c,k;
  printf("\nDigite o valor de 'a': ");
  scanf("%f",&a);
  printf("\nDigite o valor de 'b': ");
  scanf("%f",&b);
  printf("\nDigite o valor de 'c': ");
  scanf("%f",&c);

  calculo(a, b, c, &k);
  printf("\n\nResultado de (x.x)+y+z -> %.2f\n\n",k);
  system("pause");
  return 0;
}
