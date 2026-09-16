#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m;
    printf("\n\nEste programa imprime todos os multiplos de 7 entre 100 e 500.\n\n");

    for(m=105;m<500;m+=7)
    {
        printf("%d\n\n",m);
    }
    system("pause");
    return 0;
}
