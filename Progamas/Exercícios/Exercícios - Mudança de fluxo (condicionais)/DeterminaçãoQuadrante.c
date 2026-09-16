#include<stdio.h>
#include<stdlib.h>

int main()
{
 int x,y;
 printf("\n\nEste progama determina em qual quadrante se encontra um determinado ponto, dentro do sistema cartesiano, fornecidas as suas coordenadas.");
 printf("\n\nQual a coordenada x? ");
 scanf("%d",&x);
 printf("\n\nQual a coordenada y? ");
 scanf("%d",&y);

 if(x==0)
 {
     if(y==0)
     {
         printf("\n\nO ponto encontra-se na origem dos eixos, portanto suas coordenadas sao: (%d,%d).\n\n",x,y);
     }
     else
     {
         printf("\n\nO ponto encontra-se sobre o eixo y, e suas coordenadas sao: (%d,%d).\n\n",x,y);
     }
 }
 else
 {
     if(x>0)
     {
         if(y==0)
         {
             printf("\n\nO ponto encontra-se sobre o eixo x, e suas coordenadas sao: (%d,%d).\n\n",x,y);
         }
         else
         {
             if(y>0)
             {
                 printf("\n\nO ponto encontra-se no primeiro quadrante, e suas coordenadas sao: (%d,%d).\n\n",x,y);
             }
             else /*Aqui y tem valor negativo e x tem valor positivo*/
             {
                 printf("\n\nO ponto encontra-se no quarto quadrante, e suas coordenadas sao: (%d,%d).\n\n",x,y);
             }
         }
     }
     else /*Aqui x tem valor negativo*/
     {
         if(y==0)
         {
             printf("\n\nO ponto encontra-se sobre o eixo x, e suas coordenadas sao: (%d,%d).\n\n",x,y);
         }
         else
         {
             if(y>0)
             {
                 printf("\n\nO ponto encontra-se no segundo quadrante, e suas coordenadas sao: (%d,%d).\n\n",x,y);
             }
             else /*Aqui tanto x quanto y possuem valores negativos*/
             {
                 printf("\n\nO ponto encontra-se no terceiro quadrante, e suas coordenadas sao: (%d,%d).\n\n",x,y);
             }
         }
     }

 }
 system("pause");
 return 0;
}
