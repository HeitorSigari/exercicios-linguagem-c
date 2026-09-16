#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[3][3],maior;
    int i,j,l,c;
    maior=-999999;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n\nDigite o valor do elemento A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
            if(A[i][j]>maior)
            {
                maior=A[i][j];
                l=i;
                c=j;
            }
        }

    }

    printf("\n\n");
    printf("Matriz: \n\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMaior elemento da matriz: %d",maior);
    printf("\n\nPosicao do maior elemento: A[%d][%d]\n\n",l,c);

    system("pause");
    return 0;
}
