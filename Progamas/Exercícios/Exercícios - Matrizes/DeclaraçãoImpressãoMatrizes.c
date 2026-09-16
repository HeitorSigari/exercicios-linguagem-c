#include<stdio.h>
#include<stdlib.h>

int main()
{
    int M[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //inicializando cada linha
    int i,j;

    printf("\n\nImprimindo a primeira linha:\n");
    for(j=0;j<3;j++)
    {
        printf("%d ",M[0][j]);
    }

    printf("\n\nImprimindo a matriz por inteiro:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    system("pause");
    return 0;
}
