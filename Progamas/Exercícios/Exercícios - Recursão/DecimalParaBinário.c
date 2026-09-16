#include<stdio.h>
#include<stdlib.h>

//Lógica para transformação de binário em decimal: Dividir o número por 2 até que sua parte inteira (quociente da divisão) seja o próprio digito binário.
//Então, pegar os restos de baixo para cima até a primeira divisão realizada.

void bin(int n) {
    if (n < 2) {
        printf("%d", n); // Imprime o último quociente (0 ou 1)
    }
    else {
        bin(n / 2);      // Chame a si mesma até chegar no caso base
        printf("%d", n % 2); // Na volta da recursão, imprime os restos
    }
}

int main() {
    int numero;
    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    printf("\n");
    printf("Numero %d em binario: ", numero);
    bin(numero);
    printf("\n\n");

    system("pause");
    return 0;
}
