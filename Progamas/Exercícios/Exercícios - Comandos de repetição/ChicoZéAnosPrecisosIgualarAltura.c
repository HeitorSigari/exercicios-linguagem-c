#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Hchico=1.5,Hze=1.1;
    int t=0;

    printf("\n\nChico tem 1,5 m de altura e cresce 2 cm por ano.");
    printf("\n\nZe tem 1,10 m de altura e cresce 3 cm por ano.");

    while(Hchico>Hze) /* != falhou porque floats têm erro de precisão. Igualdade exata quase nunca acontece. O laço virou praticamente infinito */

    {
        Hchico+=0.02;
        Hze+=0.03;
        t++;
    }

    printf("\n\nO tempo necessario para que Ze ultrapasse Chico e: %d anos.\n\n",t);

    system("pause");
    return 0;
}
