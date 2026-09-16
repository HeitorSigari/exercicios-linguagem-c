#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>

#define linhas 10
#define colunas 8

int main ()
{
    setlocale(LC_ALL,"portuguese");
    srand(1609);

    int matriz[linhas][colunas],i,j,cont,ingresso,escolha, valor_lugar[linhas][colunas],pos_x, pos_y, maior = 0,comprados=0,escolha2,senha1, inf_linhas[12],ocupados,livres,x,escolha3,fil_maior = 0,fil_menor = 9999;
    float porcento = 0;
    int senha[10][8],s;

    for (i = 0; i < 10; i++) {
        inf_linhas[i] = 0;
    }

    printf("\n");
    for(i=0;i<10;i++)
            for(j=0;j<8;j++)
            {
                matriz[i][j] = 0;
            }
    do{
    printf("\n\t\t\t\t----------------------- Grupo Cine Cinemas -----------------------\n");
    printf("\n\t\t\t\t\t\tO que você deseja fazer?");
    printf("\n\t\t\t\t\t\t1- Abrir o mapa dos assentos do cinema.");
    printf("\n\t\t\t\t\t\t2- Comprar ingressos.");
    printf("\n\t\t\t\t\t\t3- Cancelar uma compra existente.");
    printf("\n\t\t\t\t\t\t4- Estatísticas.");
    printf("\n\t\t\t\t\t\t5- Voltar para o menu.");
    printf("\n\t\t\t\t\t\t6- Sair do sistema.");
    printf("\n\n\t\t\t\t\t\tEscolha: ");
    scanf("%d",&escolha);

        if(!(int)escolha) {
                printf("Opcao invalida");
                break;
        }

    switch(escolha)
    {
    case 1:
    cont = 0;
    system("cls");

    printf("\n\n\t\t\t\t--------------------------- Sala de Cinema ---------------------------");
    printf("\n\n");
    printf("\t\t\tCADEIRA        [1]     [2]     [3]     [4]     [5]     [6]     [7]     [8]\n");
    for(i=0;i<10;i++)
    {
        printf("\n\t\t\tFileira [%d]",i+1);
        for(j=0;j<8;j++)
        {
            printf("\t%d",matriz[i][j]);
        }
    }
    printf("\n\n\t\t\t\t-------------------------------- TELA ---------------------------------");
    printf("\n\n\n");
    break;

    case 2:

    printf("\n\n\t\t\t\t----------------------------------------------------------------------\n\n");
    printf("\n\t\t\t\t\tIndique quantos ingressos você gostaria de comprar.");
    printf("\n\n\t\t\t\t\tCaso queira cancelar sua compra agora, digite '0'.");
    printf("\n\n\t\t\t\t\tIngressos: ");
    scanf("%d",&ingresso);
    if(ingresso > 80 - comprados)
    {
        printf("\n\t\t\t\tERRO: numero de ingressos invalido.");
        break;
    }
    if(ingresso==0){
        system("cls");
        break;
    }

    else{
    printf("\n\n\t\t\t\t----------------------------------------------------------------------");
    printf("\n\t\t\tEscolha seu assento, indicando, primeiramente, a fileira (1 a 10) e, depois, a coluna (1 a 8).");
    cont = 0;
    while(cont<ingresso)
    {
        printf("\n\n\t\t\t\t\t\t\tVocê gostaria de uma sugestão?");
        printf("\n\n\t\t\t\t\t\t\t1 = SIM |||| 2 = NÃO");
        printf("\n\n\t\t\t\t\t\t\tEscolha: ");
        scanf("%d",&x);
        if (x> 2 || x< 1){
            printf("\n\t\t\t\t\t\tNúmero digitado não é uma opção.\n");
            system("pause");
            continue;
        }
        if(x==1){
        for(i = 0; i<linhas; i++){
                for(j = 0; j<colunas; j++){

                    valor_lugar[i][j] = (int)floor(3.5 - fabs( j - 3.5)) + (int)floor(4.5 - fabs( i - 4.5));

                    if(matriz[i][j] == 1){
                        valor_lugar[i][j] = 0;
                    }
                    if(ingresso==1){
                        if(j != 7){
                            if(matriz[i][j+1] == 1){
                                valor_lugar[i][j] -= 1;
                            }
                        }
                        if(j != 0){
                            if(matriz[i][j-1] == 1){
                                valor_lugar[i][j] -= 1;
                                }
                            }
                    }
                    if(valor_lugar[i][j] > maior){
                        maior = valor_lugar[i][j];
                        if(matriz[i][j] == 0){
                                pos_x = i+1;
                                pos_y = j+1;
                            }
                        }

                    }
            }
            printf("\n\n\t\t\t\t\tO melhor assento no momento é na fileira %d e na cadeira %d.",pos_x,pos_y);
            maior = 0;
        }
        printf("\n\n\t\t\t\t----------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t\t\tFileira do assento: ");
        scanf("%d",&i);
        i--;
        printf("\n\t\t\t\t\t\t\tCadeira do assento: ");
        scanf("%d",&j);
        j--;
        printf("\n\n\t\t\t\t\t\t\t---------------------\n");
        if(i<0 || i >= 10 || j < 0 || j >= 8){

            printf("\n\n\t\t\t\t\t\tERRO: Assento indicado nao existe.\n\n");
            system("pause");
            system("cls");
            break;
        }
        if(matriz[i][j]==1)
        {
            printf("\n\t\t\t\t\t\tERRO: ingresso indicado já foi comprado.\n");
            printf("\n\t\t\t\t\t\tIndique outro ingresso que ainda não foi comprado.\n\n");
            system("pause");
            continue;
        }
        else{
        matriz[i][j] = 1;
        cont++;
        s = rand() % 999 + 100;
        senha[i][j] = s;
        printf("\n\t\t\t\t\t\t\tSua senha eh: %d",senha[i][j]);
        printf("\n\n\t\t\t\t\t\tESSA SENHA É EXCLUSIVAMENTE DO ASSENTO \n\t\t\t\t\t\t\t'fileira %d', 'cadeira %d',\n\t\t\t\t\tE DEVE SER APRESENTADA EM CASO DE CANCELAMENTO DO INGRESSO.\n\n",i+1,j+1);
        printf("\n\t\t\t\t\t\tAperte ENTER ou RETURN para continuar.\n\n");
        system("PAUSE");
        printf("\n\n\t\t\t\t\t\t\t---------------------\n");
        }
    }

    printf("\n\n\t\t\t\t--------------------------- Sala de Cinema ---------------------------");
    printf("\n\n");
    printf("\t\t\tCADEIRA        [1]     [2]     [3]     [4]     [5]     [6]     [7]     [8]\n");
    for(i=0;i<10;i++)
    {
        printf("\n\t\t\tFileira [%d]",i+1);
        for(j=0;j<8;j++)
        {
            printf("\t%d",matriz[i][j]);
        }
    }
    printf("\n\n\t\t\t\t-------------------------------- TELA ---------------------------------");
    printf("\n\n\n");
    comprados+=ingresso;
    break;

    }

    case 3:
        printf("\n\t\t\t\t\t\tVocê deseja realmente cancelar sua compra?");
        printf("\n\n\t\t\t\t\t\t\t1 = SIM |||| 2 = NÃO");
        printf("\n\n\t\t\t\t\t\t\tEscolha: ");
        scanf("%d",&escolha2);
        if (escolha2 > 2 || escolha2 < 1){
            printf("\n\t\t\t\t\t\tNúmero digitado não é uma opção \n.");
            system("pause");
        }
        if (escolha2 == 1)
        {
            printf("\n\t\t\t\t\t\tIndique a fileira do seu assento (1 a 10): ");
            scanf("%d",&i);
            i--;
            printf("\n\t\t\t\t\t\tIndique a cadeira em sua fileira (1 a 8): ");
            scanf("%d",&j);
            j--;
            if(i<0 || i >= 10 || j < 0 || j >= 8){
                printf("\n\n\t\t\t\t\t\tERRO: Assento indicado nao existe.\n\n");
                system("pause");
                system("cls");
                break;
            }
            else{
                if(matriz[i][j] == 0){
                    printf("\n\t\t\t\t\t\tEste lugar ainda nao foi adquirido.\n\n");
                    system("pause");
                    break;
                }
            }
            printf("\n\t\t\t\t\t\tDigite a senha indicada: ");
            scanf("%d",&senha1);
            if(senha1!=senha[i][j]){

                printf("\n\t\t\t\t\t\t\tA senha indicada está INCORRETA.");
                printf("\n\n\t\t\t\t\t\t\tCOMPRA NAO CANCELADA.\n\n");
                break;
            }
            else{
            matriz[i][j] = 0;
            printf("\n\n\t\t\t\t--------------------------- Sala de Cinema ---------------------------");
            printf("\n\n\t\t\tCADEIRA        [1]     [2]     [3]     [4]     [5]     [6]     [7]     [8]\n");
    for(i=0;i<10;i++)
    {
        printf("\n\t\t\tFileira [%d]",i+1);
        for(j=0;j<8;j++)
        {
            printf("\t%d",matriz[i][j]);
    }
    }
    printf("\n\n\t\t\t\t-------------------------------- TELA ---------------------------------");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\tCOMPRA CANCELADA COM SUCESSO.\n\n");
    comprados--;
            }} else
            {
                system("cls");
                break;
            }
       break;

    case 4:
        printf("\n\t\t\t\t\t\tO que você deseja fazer?");
        printf("\n\t\t\t\t\t\t1- Analise dos ingressos.");
        printf("\n\t\t\t\t\t\t2- Analise de ocupacao por fileira.");
        printf("\n\t\t\t\t\t\t3- Analise de fileiras criticas.");
        printf("\n\n\t\t\t\t\t\tEscolha: ");
        scanf("%d",&escolha3);

        for(i=0;i<10;i++){
                    inf_linhas[i] = 0;
                    for(j=0;j<colunas;j++){
                        if(matriz[i][j]==1){
                        inf_linhas[i]++;
                        }
                    }
                }

        switch(escolha3){
            case 1:
                ocupados = comprados;
                livres = 80 - comprados;
                porcento = 100 * ((float)ocupados/80);
                printf("\n\n\t\t\t\t\t\tTotal de ingressos ocupados: %d",ocupados);
                printf("\n\n\t\t\t\t\t\tTotal de ingressos livres: %d",livres);
                printf("\n\n\t\t\t\t\t\tPercentual de ocupacao: %.2f%%\n\n",porcento);
            break;

            case 2:
                for(i=0;i<10;i++){
                    ocupados = 0;
                    for(j=0; j< 8; j++){
                        if(matriz[i][j] == 1){
                            ocupados++;
                        }
                        inf_linhas[i] = ocupados;
                        if(inf_linhas[i]>=fil_maior){
                        fil_maior = i+1;
                        }

                        if(inf_linhas[i]<fil_menor){
                            fil_menor = i++;
                        }
                    }
                }
                printf("\n\n\t\t\t\t\t\tIndique a fileira que voce quer analisar: ");
                scanf("%d", &i);
                if(i>10){
                    printf("\n\n\t\t\t\t\t\tERRO: fileira não existe.");
                    system("pause");
                    break;
                }
                printf("\n\n\t\t\t\t\t\t%d assentos estao sendo ocupados na fileira %d",inf_linhas[i-1],i);
                if(fil_maior == 0){
                    printf("\n\n\t\t\t\t\t\tNenhuma fileira tem um lugar ocupado.");
                } else{
                    printf("\n\n\t\t\t\t\t\tA fileira de maior ocupacao eh: %d",fil_maior);
                }
                if(fil_menor == 0){
                    printf("\n\n\t\t\t\t\t\tAinda existem fileiras vazias, consultar mapa.\n");
                } else{
                    printf("\n\n\t\t\t\t\t\tA fileira de menor ocupacao eh: %d\n",fil_menor);
                }
            break;

            case 3:

                printf("\n\n\t\t\t\t\t\tFileiras críticas são aquelas com 75%% ou mais de ocupação.");
                for(i=0;i<10;i++){
                    if(inf_linhas[i]>=6){
                        printf("\n\n\t\t\t\t\t\tEstado da fileira %d: CRÍTICA.",i+1);
                    }

                    if(inf_linhas[i]<6){
                        printf("\n\n\t\t\t\t\t\tEstado da fileira %d: NÃO CRÍTICA.",i+1);
                    }
                    printf("\n\t\t\t\t\t\tIngressos: %d\n",inf_linhas[i]);
                }
            break;
        }
        break;
    case 5:
        system("cls");
    break;
    }
} while(escolha<6);

    printf("\n\n\t\t\t\t\tVocê saiu do sistema.");

    return 0;
}
