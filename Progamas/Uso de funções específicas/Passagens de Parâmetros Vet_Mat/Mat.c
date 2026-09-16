#include<stdio.h>
#include<stdlib.h>

void imprime(int m[][4], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[3][4];
    int x,y;
    for(x=0;x<3;x++)
    {
        for(y=0;y<4;y++)
        {
            mat[x][y]=x+y;
        }
    }
    imprime(mat, 3);

    system("pause");
    return 0;
}
