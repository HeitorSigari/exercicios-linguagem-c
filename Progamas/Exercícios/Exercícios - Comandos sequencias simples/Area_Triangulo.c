#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float A,B,H;
    printf("\n\tEste progama calcula a area de um triangulo pela formula: A = b.h/2");
    printf("\n\n\tInforme o valor da base: ");
    scanf("%f",&B);
    printf("\n\tInforme o valor da altura: ");
    scanf("%f",&H);
    A = (B*H)/2;
    printf("\n\n\t A Area do tringulo com base %f e altura %f = %f\n\n",B,H,A);
    system("pause");
    return 0;
}
