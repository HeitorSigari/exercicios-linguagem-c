#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[5][3],B[3][5],i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nDigite o valor do elemento A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
            B[j][i]=A[i][j];
        }
    }

    printf("\n\n");
    printf("Matriz A:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Matriz transposta:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    system("pause");
    return 0;
}
