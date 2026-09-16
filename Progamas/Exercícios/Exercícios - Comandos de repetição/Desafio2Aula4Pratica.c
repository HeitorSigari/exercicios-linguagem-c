#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,N,num,maior,menor;
    printf("Digite a quantidade de numeros a serem lidos (maior que 10): ");
    scanf("%d",&N);
    printf("\n\nDigite um numero: ");
    scanf("%d",&num);
    maior=num;
    menor=num;

    for(i=2;i<=N;i++) /*O "i" deve ser inicializado com 2 já que antes do for houve a leitura do primeiro numero, e como nosso objetivo é apenas ler todos os nºs e não imprimi-los, isso é o correto*/
    {
        printf("\n\nDigite um numero: ");
        scanf("%d",&num);

        if(num>maior)
        {
            maior=num;
        }
        else
        {
            if(num<menor)
            {
                menor=num;
            }
            /*Não é necessário outro else após esse if; em ambos os casos, a condição sendo verdadeira ou não, o programa segue normalmente para a próxima iteração do laço, pela funcionalidade do próprio comando if.
            Ou seja, caso a condição for verdadeira, ele executa o bloco de comandos dentro do if, e caso for falsa, o ignora e segue a execução normalmente.
            O else só se torna preciso quando for necessário tratar do caso contrário. No caso do exercício, de fato não o é, pois um número não pode ser maior e menor ao mesmo tempo.
            Também havia a possibilidade de usar dois if em vez de if/else, já que tratam-se de condições independentes e não opostas (mutuamente exclusivas)*/
        }
    }
    printf("\n\nUm total de %d numeros foram lidos.\n\n",N);
    printf("\n\nO valor do maior numero e: %d\n\n",maior);
    printf("\n\nO valor do menor numero e: %d\n\n",menor);

    system("pause");
    return 0;
}
