#include<stdio.h>
#include<stdlib.h>

int contador(int digit,int num)
{
    if(num==0)
    {
        return 0;
    }

    if(num % 10 == digit){
    return 1 + contador(digit, num/10);
    }
    else {
    return 0 + contador(digit, num/10);
    }
}

int main()
{
    int numero,digito,cont;
    printf("\t\tAPARECIMENTO DE UM DIGITO\n");
    printf("\nQual o numero desejado para analise (inteiro positivo)? ");
    scanf("%d",&numero);
    printf("\nQual o digito desejado para analise? ");
    scanf("%d",&digito);
    cont=contador(digito,numero);
    printf("\nQuantidade de vezes que o digito %d aparece no numero %d: %d\n\n",digito,numero,cont);

    system("pause");
    return 0;

    //Sempre a parte inteira do número (num/10) é passada para a próxima chamada, e o num%10 retorna justamente o último dígito desse número inteiro.
}
