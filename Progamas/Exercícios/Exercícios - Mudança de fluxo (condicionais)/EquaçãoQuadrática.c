#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a,b,c,x1,x2,d;
    printf("\n\nEsta e uma calculadora de raizes reais para equacoes quadraticas. Por favor, forneca os dados a seguir:");
    printf("\n\nQual e o coeficiente 'a' desejado (DIFERENTE DE ZERO)? ");
    scanf("%f",&a);
    printf("\n\nQual e o coeficiente 'b' desejado? ");
    scanf("%f",&b);
    printf("\n\nQual e o coeficiente 'c' desejado? ");
    scanf("%f",&c);

    d = (b*b) - (4*a*c);

    if(d>0)
    {
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("\n\nAs raizes da equacao %0.fx^2 + (%0.f)x + %0.f , sao: %.0f e %.0f.\n\n",a,b,c,x1,x2);
    }
    else
    {
        if(d==0)
        {
            x1 = x2 = -b/(2*a);
            printf("\n\nA equacao %0.fx^2 + (%0.f)x + %0.f apresenta uma unica raiz: x = %0.f\n\n",a,b,c,x1);
        }
        else
        {
            printf("\n\nA equacao nao possui raizes no conjunto dos numeros reais.\n\n");
        }
    }
    system("pause");
    return 0;
}
