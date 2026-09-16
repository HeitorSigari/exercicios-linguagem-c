#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define MAXoperadores 50
#define MAXequipamentos 150

typedef struct tipo_operadores
{
    int id;
    int nivel;
    int status;
    int qtd_operacoes;
    char nome[71];
    char setor[5];
} op;

typedef struct tipo_equipamentos
{
    char id[4];
    int tipo;
    char setor[5];
    int estado;
    int id_op;
    char prioridade;
    int ocorrencias;
} equip;


int buscar_op(int id, op vet[], int total) {
    int i;
    for(i = 0; i < total; i++) {
        if(id == vet[i].id) {
            return i;
        }
    }
    return -1;
}

int buscar_equip(char id[], equip vet[], int total) {
    int i;
    for(i = 0; i < total; i++) {
        if(strcmp(id, vet[i].id) == 0) {
            return i;
        }
    }
    return -1;
}


void cadastro_op(op vet[], int *total) {
    int c, valido, id_busca, temp_id;
    int i = *total;

    if(*total >= MAXoperadores) {
        printf("\n[ERRO] Limite de operadores ultrapassado!\n");
        return;
    }

    printf("\n\t\t=== CADASTRO DE OPERADOR (%d/%d) ===\n", i + 1, MAXoperadores);

    do {
        printf("ID do operador (4 digitos): ");
        scanf("%d", &temp_id);

        if(temp_id < 1000 || temp_id > 9999) {
            printf("[ERRO] O ID deve possuir exatamente 4 digitos.\n");
            id_busca = 0;
        } else {
            id_busca = buscar_op(temp_id, vet, *total);
            if(id_busca != -1) {
                printf("[ERRO] Este ID ja esta cadastrado para outro operador!\n");
            }
        }
    } while(temp_id < 1000 || temp_id > 9999 || id_busca != -1);

    vet[i].id = temp_id;

    while ((c = getchar()) != '\n' && c != EOF);
    printf("Nome do operador: ");
    fgets(vet[i].nome, 71, stdin);
    vet[i].nome[strcspn(vet[i].nome, "\n")] = '\0';
    if(strlen(vet[i].nome) == 70) {
        while ((c = getchar()) != '\n' && c != EOF);
    }

    valido = 0;
    do {
        printf("Setor (duas letras e dois digitos, ex: AB12): ");
        fgets(vet[i].setor, 5, stdin);
        vet[i].setor[strcspn(vet[i].setor, "\n")] = '\0';

        vet[i].setor[0] = toupper(vet[i].setor[0]);
        vet[i].setor[1] = toupper(vet[i].setor[1]);

        if (strlen(vet[i].setor) == 4 && isalpha(vet[i].setor[0]) && isalpha(vet[i].setor[1]) && isdigit(vet[i].setor[2]) && isdigit(vet[i].setor[3])) {
            valido = 1;
        } else {
            printf("[ERRO] Formato incorreto. Use o padrao LLNN.\n");
            while ((c = getchar()) != '\n' && c != EOF);
        }
    } while (valido != 1);

    do {
        printf("Nivel profissional (1=basico, 2=intermediario, 3=supervisor tecnico): ");
        scanf("%d", &vet[i].nivel);
    } while(vet[i].nivel != 1 && vet[i].nivel != 2 && vet[i].nivel != 3);

    do {
        printf("Status inicial (1=ativo, 2=ocupado, 3=inativo, 4=bloqueado): ");
        scanf("%d", &vet[i].status);
    } while(vet[i].status != 1 && vet[i].status != 2 && vet[i].status != 3 && vet[i].status != 4);

    vet[i].qtd_operacoes = 0;

    (*total)++;
    printf("\nOperador cadastrado com sucesso!\n");
}

void cadastro_equip(equip vet[], int *total, op vet_op[], int total_op) {
    int c, valido, i = *total, validID;
    char temp_id[4];

    if(*total >= MAXequipamentos) {
        printf("\n[ERRO] Limite de equipamentos ultrapassado!\n");
        return;
    }

    printf("\n\t\t=== CADASTRO DE EQUIPAMENTO (%d/%d) ===\n", i + 1, MAXequipamentos);
    while ((c = getchar()) != '\n' && c != EOF);

    valido = 0;
    do {
        printf("ID do equipamento (uma letra e dois digitos, ex: A12): ");
        fgets(temp_id, 4, stdin);
        temp_id[strcspn(temp_id, "\n")] = '\0';

        temp_id[0] = toupper(temp_id[0]);

        if(strlen(temp_id) == 3 && isalpha(temp_id[0]) && isdigit(temp_id[1]) && isdigit(temp_id[2])) {
            if(buscar_equip(temp_id, vet, *total) == -1) {
                valido = 1;
            } else {
                printf("[ERRO] Este ID de equipamento ja existe!\n");
                while ((c = getchar()) != '\n' && c != EOF);
            }
        } else {
            printf("[ERRO] Formato incorreto. Use o padrao LNN.\n");
            while ((c = getchar()) != '\n' && c != EOF);
        }
    } while (valido != 1);
    strcpy(vet[i].id, temp_id);

    do {
        printf("Tipo do equipamento (1=Drone, 2=Alarme, 3=Sensor, 4=Robo): ");
        scanf("%d", &vet[i].tipo);
    } while (vet[i].tipo < 1 || vet[i].tipo > 4);

    while ((c = getchar()) != '\n' && c != EOF);

    valido = 0;
    do {
        printf("Setor do equipamento (duas letras e dois digitos, ex: AB12): ");
        fgets(vet[i].setor, 5, stdin);
        vet[i].setor[strcspn(vet[i].setor, "\n")] = '\0';

        vet[i].setor[0] = toupper(vet[i].setor[0]);
        vet[i].setor[1] = toupper(vet[i].setor[1]);

        if(strlen(vet[i].setor) == 4 && isalpha(vet[i].setor[0]) && isalpha(vet[i].setor[1]) && isdigit(vet[i].setor[2]) && isdigit(vet[i].setor[3])) {
            valido = 1;
        } else {
            printf("[ERRO] Formato incorreto. Use o padrao LLNN.\n");
            while ((c = getchar()) != '\n' && c != EOF);
        }
    } while (valido != 1);

    do {
        printf("Estado operacional (1=Ativo, 2=Inativo, 3=Manutencao): ");
        scanf("%d", &vet[i].estado);
    } while(vet[i].estado != 1 && vet[i].estado != 2 && vet[i].estado != 3);

    int op_no_setor = 0;
    for(int j = 0; j < total_op; j++) {
        if(strcmp(vet_op[j].setor, vet[i].setor) == 0) {
            op_no_setor = 1;
            break;
        }
    }
    if(op_no_setor == 0) {
        printf("[AVISO] Nenhum operador cadastrado no setor %s. Cadastre um operador antes.\n", vet[i].setor);
        printf("[AVISO] Encerrando cadastrado de equipamento...");
        return;
    }

    int posID_op;
    validID=0;
    do {
        printf("ID do operador responsavel: ");
        scanf("%d", &vet[i].id_op);
        if (vet[i].id_op < 1000 || vet[i].id_op > 9999) {
        printf("[ERRO] ID invalido. Use 4 digitos.\n");
        validID = -1;
        } else {
        posID_op = buscar_op(vet[i].id_op, vet_op, total_op);

        if (posID_op == -1) {
            printf("[AVISO] Este operador nao esta cadastrado no sistema.\n");
            validID = -1;
        } else if (strcmp(vet[i].setor, vet_op[posID_op].setor) != 0) {
            printf("[AVISO] Nao e possivel cadastrar operarios de outros setores.\n");
            validID = -1;
        }   else {
                validID = 1;
            }
        }
    } while(validID != 1);

    while ((c = getchar()) != '\n' && c != EOF);
    do {
        printf("Prioridade (a=alta, m=media, b=baixa): ");
        vet[i].prioridade = getchar();
        while ((c = getchar()) != '\n' && c != EOF);
    } while(tolower(vet[i].prioridade) != 'a' && tolower(vet[i].prioridade) != 'b' && tolower(vet[i].prioridade) != 'm');

    vet[i].ocorrencias = 0;
    (*total)++;
    printf("\nEquipamento cadastrado com sucesso!\n");
}


void mostrar_tipo(int tipo){
    if(tipo == 1){
        printf("Drone |");
    }
    else{
        if(tipo == 2){
            printf("Alarme |");
        }
        else{
            if(tipo == 3){
                printf("Sensor |");
            }
            else{
                if(tipo == 4){
                    printf("Robo |");
                }
            }
        }
    }
}

void mostrar_prioridade(char prioridade){
    if(prioridade == 'a'){
        printf("Alta (CRITICO)!");
    }
    else{
        if(prioridade == 'm'){
            printf("Media");
        }
        else{
            if(prioridade == 'b'){
                printf("Baixa");
            }
        }
    }
}

void mostrar_estado(int estado){
    if(estado == 1){
        printf("Ativo\n");
    }
    else{
        if(estado == 2){
            printf("Inativo\n");
        }
        else{
            if(estado == 3){
                printf("Manutencao\n");
            }
        }
    }
}


void atualizar_op(op vet[], int total) {
    int id, i, opMenu, opcao, c;

    if(total == 0) {
        printf("\nNenhum operador cadastrado.\n");
        return;
    }

    do {
    printf("\nQual o ID do operador que deseja atualizar? ");
    scanf("%d", &id);
    while ((c = getchar()) != '\n' && c != EOF);
    if(id < 1000 || id > 9999) {
        printf("[ERRO] O ID deve possuir exatamente 4 digitos.\n");
    }
    } while(id < 1000 || id > 9999);

    i = buscar_op(id, vet, total);

    if(i == -1) {
    printf("[ERRO] Operador nao encontrado.\n");
    return;
    }

    do {
        printf("\n=== ATUALIZAR OPERADOR: %s ===\n", vet[i].nome);
        printf("1 - Alterar Status (Disponibilidade)\n");
        printf("2 - Alterar Nivel\n");
        printf("3 - Adicionar/Remover Operacao\n");
        printf("4 - Desativar Operador (Ficar Inativo)\n");
        printf("5 - Limpar tela\n");
        printf("0 - Voltar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opMenu);

        switch(opMenu) {
            case 1:
                do {
                    printf("Novo status (1=Ativo, 2=Ocupado, 3=Inativo, 4=Bloqueado): ");
                    scanf("%d", &vet[i].status);
                } while(vet[i].status < 1 || vet[i].status > 4);
                printf("Status atualizado com sucesso!\n");
                break;

            case 2:
                do {
                    printf("Novo nivel (1=basico, 2=intermediario, 3=supervisor tecnico): ");
                    scanf("%d", &vet[i].nivel);
                } while(vet[i].nivel < 1 || vet[i].nivel > 3);
                printf("Nivel atualizado com sucesso!\n");
                break;

            case 3:
                printf("1 - Adicionar operacao realizada\n");
                printf("2 - Remover operacao realizada\n");
                scanf("%d", &opcao);
                if(opcao == 1) {
                    vet[i].qtd_operacoes++;
                    printf("Operacao adicionada!\n");
                } else if(opcao == 2 && vet[i].qtd_operacoes > 0) {
                    vet[i].qtd_operacoes--;
                    printf("Operacao removida!\n");
                }
                break;

            case 4:
                vet[i].status = 3;
                printf("Operador desativado do sistema com sucesso.\n");
                break;

            case 5:
                system("cls");
                break;
        }
    } while(opMenu != 0);
}

void atualizar_equip(equip vet[], int total) {
    int i, opMenu, c, valido;
    char id[4];

    if(total == 0) {
        printf("\nNenhum equipamento cadastrado.\n");
        return;
    }

    valido = 0;
    do {
        while ((c = getchar()) != '\n' && c != EOF);
        printf("\nQual o ID do equipamento que deseja atualizar (Ex: A12)? ");
        fgets(id, 4, stdin);
        id[strcspn(id, "\n")] = '\0';

        id[0] = toupper(id[0]);

        if(strlen(id) == 3 && isalpha(id[0]) && isdigit(id[1]) && isdigit(id[2])) {
            valido = 1;
        } else {
            printf("[ERRO] Formato incorreto. Use o padrao LNN.\n");
        }
    } while(valido == 0);

    i = buscar_equip(id, vet, total);
    if(i == -1) {
        printf("[ERRO] Equipamento nao encontrado.\n");
        return;
    }

    do {
        printf("\n=== ATUALIZAR EQUIPAMENTO: %s ===\n", vet[i].id);
        printf("1 - Alterar Estado Operacional\n");
        printf("2 - Mover Equipamento de Setor\n");
        printf("3 - Registrar Ocorrencia Critica\n");
        printf("4 - Desativar Registro (Ficar Inativo)\n");
        printf("5 - Limpar tela\n");
        printf("0 - Voltar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opMenu);

        switch(opMenu) {
            case 1:
                do {
                    printf("Novo Estado (1=Ativo, 2=Inativo, 3=Manutencao): ");
                    scanf("%d", &vet[i].estado);
                } while(vet[i].estado < 1 || vet[i].estado > 3);
                printf("Estado alterado com sucesso!\n");
                break;

            case 2:
                while ((c = getchar()) != '\n' && c != EOF);
                valido = 0;
                do {
                    printf("Digite o Novo Setor (LLNN): ");
                    fgets(vet[i].setor, 5, stdin);
                    vet[i].setor[strcspn(vet[i].setor, "\n")] = '\0';

                    vet[i].setor[0] = toupper(vet[i].setor[0]);
                    vet[i].setor[1] = toupper(vet[i].setor[1]);

                    if(strlen(vet[i].setor) == 4 && isalpha(vet[i].setor[0]) && isalpha(vet[i].setor[1]) && isdigit(vet[i].setor[2]) && isdigit(vet[i].setor[3])) {
                        valido = 1;
                    } else {
                        printf("[ERRO] Formato invalido.\n");
                        while ((c = getchar()) != '\n' && c != EOF);
                    }
                } while(valido == 0);

                vet[i].id_op = 0;
                printf("Equipamento movido de setor! Operador desassociado.\n");
                break;

            case 3:
                vet[i].ocorrencias++;
                printf("Ocorrencia registrada com sucesso! Total do modulo: %d\n", vet[i].ocorrencias);
                break;

            case 4:
                vet[i].estado = 2;
                printf("Equipamento desativado com sucesso.\n");
                break;

            case 5:
                system("cls");
                break;
        }
    } while(opMenu != 0);
}


void consultas(op vet_op[], int total_op, equip vet_eq[], int total_eq) {
    int opMenu, id, i, c, achou,valido;
    char nome_busca[71], setor_busca[5];

    do {
        printf("\n=== SISTEMA DE CONSULTAS ===\n");
        printf("1 - Pesquisar se Operador esta livre (Por ID ou Nome)\n");
        printf("2 - Pesquisar Estado Operacional de um Equipamento\n");
        printf("3 - Pesquisar Operadores Ativos por Equipamento (livre para operar um equipamento) e Setor\n");
        printf("4 - Limpar tela\n");
        printf("0 - Voltar\n");
        printf("Escolha: ");
        scanf("%d", &opMenu);

        switch(opMenu) {
            case 1:
                printf("Buscar por: 1-ID ou 2-Nome: ");
                scanf("%d", &id);
                achou = 0;
                if(id == 1) {
                    do {
                    printf("Digite o ID: ");
                    scanf("%d", &id);
                    while ((c = getchar()) != '\n' && c != EOF);
                    if(id < 1000 || id > 9999) {
                        printf("[ERRO] O ID deve possuir exatamente 4 digitos.\n");
                    }
                    } while(id < 1000 || id > 9999);

                    i = buscar_op(id, vet_op, total_op);
                    if(i != -1) {
                    printf("Operador: %s | Status: %s\n", vet_op[i].nome, (vet_op[i].status == 1) ? "LIVRE/ATIVO" : "OCUPADO/INDISPONIVEL");
                    achou = 1;
                    }
                }
                else {
                    while ((c = getchar()) != '\n' && c != EOF);
                    printf("Digite o Nome: ");
                    fgets(nome_busca, 71, stdin);
                    nome_busca[strcspn(nome_busca, "\n")] = '\0';
                    for(i=0; i<total_op; i++) {
                        if(strstr(vet_op[i].nome, nome_busca) != NULL) {
                            printf("ID: %d | Operador: %s | Status: %s\n", vet_op[i].id, vet_op[i].nome, (vet_op[i].status == 1) ? "LIVRE/ATIVO" : "OCUPADO/INDISPONIVEL");
                            achou = 1;
                        }
                    }
                }
                if(!achou) printf("Nenhum operador encontrado.\n");
                break;

            case 2:
                while ((c = getchar()) != '\n' && c != EOF);
                valido = 0;
                do {
                    printf("Digite o ID do equipamento (LNN): ");
                    fgets(nome_busca, 4, stdin);
                    nome_busca[strcspn(nome_busca, "\n")] = '\0';

                    nome_busca[0] = toupper(nome_busca[0]);

                    if(strlen(nome_busca) == 3 && isalpha(nome_busca[0]) && isdigit(nome_busca[1]) && isdigit(nome_busca[2])) {
                        valido = 1;
                    } else {
                        printf("[ERRO] Formato incorreto. Use o padrao LNN.\n");
                        while ((c = getchar()) != '\n' && c != EOF);
                    }
                } while(valido == 0);

                i = buscar_equip(nome_busca, vet_eq, total_eq);
                if(i != -1) {
                    printf("Equipamento %s | Estado: ", vet_eq[i].id);
                    if(vet_eq[i].estado == 1) printf("Ativo\n");
                    else if(vet_eq[i].estado == 2) printf("Inativo\n");
                    else printf("Manutencao\n");
                } else {
                    printf("Equipamento nao encontrado.\n");
                }
                break;


            case 3:
                while ((c = getchar()) != '\n' && c != EOF);

                valido = 0;
                do {
                 printf("Digite o Setor desejado (LLNN): ");
                fgets(setor_busca, 5, stdin);
                setor_busca[strcspn(setor_busca, "\n")] = '\0';
                setor_busca[0] = toupper(setor_busca[0]);
                setor_busca[1] = toupper(setor_busca[1]);
                if (strlen(setor_busca) == 4 && isalpha(setor_busca[0]) && isalpha(setor_busca[1]) && isdigit(setor_busca[2]) && isdigit(setor_busca[3])) {
                valido = 1;
                } else {
                printf("[ERRO] Formato incorreto. Use o padrao LLNN.\n");
                while ((c = getchar()) != '\n' && c != EOF);
                }
                } while (valido != 1);

                printf("\n--- Operadores Ativos no Setor %s ---\n", setor_busca);
                achou = 0;
                for(i=0; i<total_op; i++) {
                    if(strcmp(vet_op[i].setor, setor_busca) == 0 && vet_op[i].status == 1) {
                        printf("ID: %d | Nome: %s\n", vet_op[i].id, vet_op[i].nome);
                        achou = 1;
                    }
                }
                if(achou == 0) printf("Nenhum operador ativo cadastrado para este setor.\n");
                break;

            case 4:
                system("cls");
                break;
        }
    } while(opMenu != 0);
}


void relatorios(op vet_op[], int total_op, equip vet_eq[], int total_eq) {
    int opMenu, i, j, c, achou, maior, valido, valido2, valido3, valido4;
    char setor_busca[5];

    do {
        printf("\n=== GERADOR DE RELATORIOS ===\n");
        printf("1 - Listar TODOS os operadores cadastrados\n");
        printf("2 - Listar operadores de um Setor Especifico\n");
        printf("3 - Listar equipamentos de um Setor Especifico\n");
        printf("4 - Listar Relacao Operador x Equipamento por Setor\n");
        printf("5 - Operadores com MAIOR numero de operacoes por setor\n");
        printf("6 - Limpar tela\n");
        printf("0 - Voltar\n");
        printf("Escolha: ");
        scanf("%d", &opMenu);

        switch(opMenu) {
            case 1:
                printf("\n--- TODOS OS OPERADORES ---\n");
                for(i = 0; i < total_op; i++) {
                    printf("ID: %d | Nome: %s | Setor: %s | Nivel: %d | Status: %d | Operacoes: %d\n",
                           vet_op[i].id, vet_op[i].nome, vet_op[i].setor, vet_op[i].nivel, vet_op[i].status, vet_op[i].qtd_operacoes);
                }
                if(total_op == 0) printf("Nenhum cadastrado.\n");
                break;

            case 2:
                while ((c = getchar()) != '\n' && c != EOF);

                valido = 0;
                do {
                 printf("Digite o Setor desejado (LLNN): ");
                fgets(setor_busca, 5, stdin);
                setor_busca[strcspn(setor_busca, "\n")] = '\0';
                setor_busca[0] = toupper(setor_busca[0]);
                setor_busca[1] = toupper(setor_busca[1]);
                if (strlen(setor_busca) == 4 && isalpha(setor_busca[0]) && isalpha(setor_busca[1]) && isdigit(setor_busca[2]) && isdigit(setor_busca[3])) {
                valido = 1;
                } else {
                printf("[ERRO] Formato incorreto. Use o padrao LLNN.\n");
                while ((c = getchar()) != '\n' && c != EOF);
                }
                } while (valido != 1);

                printf("\n--- Operadores do Setor %s ---\n", setor_busca);
                for(i = 0; i < total_op; i++) {
                    if(strcmp(vet_op[i].setor, setor_busca) == 0) {
                        printf("ID: %d | Nome: %s | Status: %d\n", vet_op[i].id, vet_op[i].nome, vet_op[i].status);
                    }
                }
                break;

            case 3:
                while ((c = getchar()) != '\n' && c != EOF);

                valido2 = 0;
                do {
                 printf("Digite o Setor desejado (LLNN): ");
                fgets(setor_busca, 5, stdin);
                setor_busca[strcspn(setor_busca, "\n")] = '\0';
                setor_busca[0] = toupper(setor_busca[0]);
                setor_busca[1] = toupper(setor_busca[1]);
                if (strlen(setor_busca) == 4 && isalpha(setor_busca[0]) && isalpha(setor_busca[1]) && isdigit(setor_busca[2]) && isdigit(setor_busca[3])) {
                valido2 = 1;
                } else {
                printf("[ERRO] Formato incorreto. Use o padrao LLNN.\n");
                while ((c = getchar()) != '\n' && c != EOF);
                }
                } while (valido2 != 1);

                printf("\n--- Equipamentos do Setor %s ---\n", setor_busca);

                int encontrouALTA = 0;
                printf("--- PRIORIDADE ALTA (CRITICO) ---\n");
                for(i = 0; i < total_eq; i++) {
                    if(strcmp(vet_eq[i].setor, setor_busca) == 0 && vet_eq[i].prioridade == 'a'){
                        encontrouALTA = 1;
                        printf("ID: %s |  ", vet_eq[i].id);
                        printf("Tipo: ");
                        mostrar_tipo(vet_eq[i].tipo);
                        printf("Estado: ");
                        mostrar_estado(vet_eq[i].estado);
                    }

                }
                if(encontrouALTA==0){
                    printf("Nao ha equipamentos com prioridade ALTA neste setor.\n");
                }

                printf("\n--- PRIORIDADE MEDIA ---\n");
                for(i = 0; i < total_eq; i++) {
                    if(strcmp(vet_eq[i].setor, setor_busca) == 0 && vet_eq[i].prioridade == 'm'){
                        printf("ID: %s |  ", vet_eq[i].id);
                        printf("Tipo: ");
                        mostrar_tipo(vet_eq[i].tipo);
                        printf("Estado: ");
                        mostrar_estado(vet_eq[i].estado);
                    }

                }
                printf("\n--- PRIORIDADE BAIXA ---\n");
                for(i = 0; i < total_eq; i++) {
                    if(strcmp(vet_eq[i].setor, setor_busca) == 0 && vet_eq[i].prioridade == 'b'){
                        printf("ID: %s |  ", vet_eq[i].id);
                        printf("Tipo: ");
                        mostrar_tipo(vet_eq[i].tipo);
                        printf("Estado: ");
                        mostrar_estado(vet_eq[i].estado);
                    }

                }
                break;

            case 4:
                while ((c = getchar()) != '\n' && c != EOF);

                valido3 = 0;
                do {
                 printf("Digite o Setor desejado (LLNN): ");
                fgets(setor_busca, 5, stdin);
                setor_busca[strcspn(setor_busca, "\n")] = '\0';
                setor_busca[0] = toupper(setor_busca[0]);
                setor_busca[1] = toupper(setor_busca[1]);
                if (strlen(setor_busca) == 4 && isalpha(setor_busca[0]) && isalpha(setor_busca[1]) && isdigit(setor_busca[2]) && isdigit(setor_busca[3])) {
                valido3 = 1;
                } else {
                printf("[ERRO] Formato incorreto. Use o padrao LLNN.\n");
                while ((c = getchar()) != '\n' && c != EOF);
                }
                } while (valido3 != 1);

                printf("\n--- Relacao Vinculada no Setor %s ---\n", setor_busca);
                for(i = 0; i < total_eq; i++) {
                    if(strcmp(vet_eq[i].setor, setor_busca) == 0) {
                        int idx_op = buscar_op(vet_eq[i].id_op, vet_op, total_op);
                        printf("Equipamento: %s (Tipo %d) -> Operador Responsavel: ", vet_eq[i].id, vet_eq[i].tipo);
                        if(idx_op != -1) {
                        printf("%s (ID: %d)\n", vet_op[idx_op].nome, vet_op[idx_op].id);
                        } else if(vet_eq[i].id_op == 0) {
                            printf("Sem operador associado.\n");
                        } else {
                            printf("ID %d (Nao cadastrado)\n", vet_eq[i].id_op);
                        }
                    }
                }
                break;

            case 5:
                while ((c = getchar()) != '\n' && c != EOF);

                valido4 = 0;
                do {
                 printf("Digite o Setor desejado (LLNN): ");
                fgets(setor_busca, 5, stdin);
                setor_busca[strcspn(setor_busca, "\n")] = '\0';
                setor_busca[0] = toupper(setor_busca[0]);
                setor_busca[1] = toupper(setor_busca[1]);
                if (strlen(setor_busca) == 4 && isalpha(setor_busca[0]) && isalpha(setor_busca[1]) && isdigit(setor_busca[2]) && isdigit(setor_busca[3])) {
                valido4 = 1;
                } else {
                printf("[ERRO] Formato incorreto. Use o padrao LLNN.\n");
                while ((c = getchar()) != '\n' && c != EOF);
                }
                } while (valido4 != 1);

                maior = -1;
                for(i = 0; i < total_op; i++) {
                    if(strcmp(vet_op[i].setor, setor_busca) == 0 && vet_op[i].qtd_operacoes > maior) {
                        maior = vet_op[i].qtd_operacoes;
                    }
                }
                if(maior == -1) {
                    printf("Nenhum operador neste setor.\n");
                } else {
                    printf("\n--- Operador(es) Destaque com %d operacoes no Setor %s ---\n", maior, setor_busca);
                    for(i = 0; i < total_op; i++) {
                        if(strcmp(vet_op[i].setor, setor_busca) == 0 && vet_op[i].qtd_operacoes == maior) {
                            printf("ID: %d | Nome: %s\n", vet_op[i].id, vet_op[i].nome);
                        }
                    }
                }
                break;

            case 6:
                system("cls");
                break;
        }
    } while(opMenu != 0);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    op operadores[MAXoperadores];
    equip equipamentos[MAXequipamentos];

    int total_operadores = 0;
    int total_equipamentos = 0;
    int escolha;

    do {
        printf("\n\n\t\t <<< OrbyTech Sistemas Integrados >>>");
        printf("\n\t\t ------- Bem-Vindo ao Sistema -------");
        printf("\n\t\t ==== Central de Operacoes Autonomas ====");
        printf("\n\n\t\t 1 - Cadastro de Operador");
        printf("\n\t\t 2 - Cadastro de Equipamento");
        printf("\n\t\t 3 - Atualizar Cadastro de Operador");
        printf("\n\t\t 4 - Atualizar Cadastro de Equipamento");
        printf("\n\t\t 5 - Painel de Consultas (ID, Estados, Disponibilidade)");
        printf("\n\t\t 6 - Relatorios Operacionais Simples");
        printf("\n\t\t 7 - Limpar tela\n");
        printf("\n\t\t 0 - Sair do Sistema");
        printf("\n\n\t\t Escolha: ");
        scanf("%d", &escolha);

        switch(escolha) {
            case 1:
                cadastro_op(operadores, &total_operadores);
                break;

            case 2:
                cadastro_equip(equipamentos, &total_equipamentos, operadores, total_operadores);
                break;

            case 3:
                atualizar_op(operadores, total_operadores);
                break;

            case 4:
                atualizar_equip(equipamentos, total_equipamentos);
                break;

            case 5:
                consultas(operadores, total_operadores, equipamentos, total_equipamentos);
                break;

            case 6:
                relatorios(operadores, total_operadores, equipamentos, total_equipamentos);
                break;

            case 0:
                printf("\nEncerrando sistema OrbyTech...\n");
                break;

            case 7:
                system("cls");
                break;

            default:
                printf("\n[ERRO] Opcao invalida. Tente novamente.\n");
                break;
        }
    } while(escolha != 0);

    return 0;
}
