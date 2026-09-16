/*Este progama calcula
a media aritmetica entre 2 notas*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
float nota1,nota2,media;
printf("\n\tInforme a primeira nota: ");
scanf("%f",&nota1);
printf("\n\tInforme a segunda nota: ");
scanf("%f",&nota2);
media = (nota1+nota2)/2;
printf("\n\tMedia aritmetica entre %f e %f = %f" ,nota1,nota2,media);
printf("\n\n");
system("pause");
return 0;
}
