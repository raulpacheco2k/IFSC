#include <stdio.h>
#include <stdlib.h>


struct cliente{
    int id;
    int saldo;
} cliente[10];


struct lancamento{
    int id;
    int cd_cliente;
    char descricao[50];
    float valor;
    int tipo;
} lancamento[50];

// Começo atividade 1
#include <math.h>

int atividade_um(void) {
    float C; // Capital
    float I; // Taxa de juros
    int T = 60 ; // Tempo
    float M; // Montante
    float parcela;

    printf("Qual o valor do veiculo que deseja financiar? ");
    scanf("%f", &C);

    printf("Qual o juros praticado mensalmente? ");
    scanf("%f", &I);

    printf("\nCalculando...");
    printf("\nFinanciamneto de R$%.2f", C);
    printf("\nJuros de %.2f%%.", I);
    printf("\nDurante %i meses.", T);

    M = (C + 350) * (pow((1 + (I/100)), T));
    parcela = M / T;

    printf("\n\nAo final de tudo você pagará %.2f e R$350 de taxa de abertura de credito já aplicados ao financiamento.", M);
    printf("\n\nCada mês você pagará R$%.2f, estando incluindo no valor R$%.2f de juros", parcela, ((M/T)-(C/T)));

    return 0;
}

// Fim atividade 1
// Começo Atividade 2

void createcliente(){
    for (int i = 0; i < 10; ++i) {
        cliente[i].id = i + 1;
        cliente[i].saldo = 0;
    }
}

void recebe_pagamento(){
    int id;
    int currentId;

    for (int x = 0; x < 50; x++) {
        if (lancamento[x].id == 0) {
            id = x + 1;
            currentId = x;
            lancamento[x].id = id;
            break;
        }
    }

    fflush(stdout);
    printf("Data do serviço: ");
    fflush(stdin);
    fgets(lancamento[currentId].descricao, sizeof(lancamento[currentId].descricao), stdin);
    printf("\n");

    printf("Código do cliente: ");
    scanf("%d", &lancamento[currentId].cd_cliente);
    printf("\n");

    lancamento[currentId].tipo = 3;

    printf("serviço pago! \n");
}

int atividade_dois(void){
    int option;

    while(1){
        printf("\nO que você deseja fazer?");
        printf("\n1 - Cadastrar lançamento");
        printf("\n2 - Historico de lançamentos");
        printf("\n3 - Receber lançamentos");
        printf("\nSua resposta: ");
        scanf("%d", &option);

        if (option == 1){
            int id;
            int currentId;

            for (int x = 0; x < 50; x++) {
                if (lancamento[x].id == 0) {
                    id = x + 1;
                    currentId = x;
                    lancamento[x].id = id;
                    break;
                }
            }

            fflush(stdout);
            printf("Descricao do serviço: ");
            fflush(stdin);
            fgets(lancamento[currentId].descricao, sizeof(lancamento[currentId].descricao), stdin);
            printf("\n");

            printf("Código do cliente: ");
            scanf("%d", &lancamento[currentId].cd_cliente);
            printf("\n");

            printf("Insira o tipo do serviço: \n");
            printf("\t 1 - Prestacao de serviços \n");
            printf("\t 2 - Compra de material \n");
            printf("Opcao: ");
            scanf("%d", &lancamento[currentId].tipo);

            if (lancamento[currentId].tipo == 2){
                printf("Preço do material: ");
            }else{
                printf("Preço do serviço: ");
            }
            scanf("%f", &lancamento[currentId].valor);
            printf("\n");

            printf("serviço cadastrado! \n");
        } if (option == 2){
            int id;
            float saldo_total = 0;

            printf("Qual ID do cliente que você deseja verificar o historico de lançamento? ");
            scanf("%d", &id);

            for (int x = 0; x < 50; x++) {
                if (lancamento[x].cd_cliente == id) {
                    saldo_total += lancamento[x].valor;
                    printf("\nDescrição: %s", lancamento[x].descricao);
                    printf("Valor total fatura com o cliente R$%.2f", saldo_total);
                }
            }
        } if (option = 3) {
            recebe_pagamento();
        }
    }

    return 0;
}



// Fim atividade 2

int main(){
    int option;
    while (1){
        printf("\n\nEscolha a atividade \n");

        printf("Digite (1) para ir para ativade 1\n");
        printf("Digite (2) para ir para ativade 2\n");
        printf("Digite (0) para sair\n");

        printf("Qual atividade deseja: ");
        scanf("%d", &option);
        printf("\n");

        if (option == 1) atividade_um();
        if (option == 2) atividade_dois();
        if (option == 0) break;
    }

}