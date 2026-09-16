#include<stdio.h>
#include<stdlib.h>

int main()
{
    float SalarioL;
    int D,SalarioB;
    printf("\n\nEste programa sera usado para calcular o salario liquido de um funcionario contratado a 30 R$ por dia num periodo de um mes, baseado no numero de dias de servico do mesmo.");
    printf("\n\nPor favor, informe a quantidade de dias trabalhados: ");
    scanf("%d",&D);

    SalarioB = D*30;
    SalarioL = SalarioB*0.92;

    printf("\n\nO valor bruto a ser pago ao funcionario e: %d R$",SalarioB);
    printf("\n\nNo entando, devido ao imposto de renda, o valor liquido que o mesmo recebera sera de: %.2f R$\n\n",SalarioL);

    system("pause");
    return 0;
}
