#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calculo(float x, float y, float z)
{
    float res;
    res=(x*x)+y+z;
    return res;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a,b,c,res;

    printf("Digite um número a: ");
    scanf("%f",&a);
    printf("\n\nDigite um número b: ");
    scanf("%f",&b);
    printf("\n\nDigite um número c: ");
    scanf("%f",&c);

    res=calculo(a, b, c);
    printf("\n\nO resultado de (x*x)+y+z é: %.2f\n\n",res);

    return 0;
}
