// Created by attus on 24/04/2021.

void createClient(){
    int id;
    int currentId;
    int isPossibleCreate = 0;

    for(int x = 0; x < 15; x++){
        if(Clients[x].id == 0){
            id = x + 1;
            currentId = id - 1;
            isPossibleCreate = 1;
            Clients[x].id = id;
            break;
        }
    }

    if(!isPossibleCreate){
        printf("Voce atingiu o limite de cadastrados \n");
        return;
    }

    printf("Insira o nome do cliente: \n");
    printf("Nome: ");
    fflush(stdin);
    fgets(Clients[currentId].name, sizeof(Clients[currentId].name), stdin);

    printf("Insira o numero de contato do cliente \n");
    printf("Numero: ");
    scanf("%d", &Clients[currentId].contact);

    printf("Insira o cpf do cliente \n");
    printf("Cpf: ");
    scanf("%d", &Clients[currentId].cpf);

}

void listClients(){
    printf("\n\n");

    printf("Clientes: \n");

    for (int i = 0; i < 15; ++i) {
        if(Clients[i].id == 0) continue;

        printf("ID: %d \n", Clients[i].id);
        printf("NOME: %s", Clients[i].name);
        printf("CONTATO: %d \n", Clients[i].contact);
        printf("CPF: %d \n", Clients[i].cpf);
        printf("\n\n");
    }
}

void listClientsWithCountSales(){
    printf("\n\n");

    printf("Clientes: \n");

    for (int i = 0; i < 15; ++i) {
        if(Clients[i].id == 0) continue;

        printf("ID: %d \n", Clients[i].id);
        printf("NOME: %s", Clients[i].name);
        printf("CONTATO: %d \n", Clients[i].contact);
        printf("CPF: %d \n", Clients[i].cpf);

        int sales = 0;

        for (int j = 0; j < 50; ++j) {
            if(Sales[j].id == 0 || Sales[j].id != Clients[i].id) continue;
            if (Sales[j].id == Clients[i].id) sales++;
        }

        printf("TOTAL DE VENDAS: %d \n", sales);

        printf("\n\n");
    }
}

void updateClient(){
    int id;
    int hasClient = 0;
    printf("Id do cliente que voce deseja atualizar \n");
    printf("ID: ");
    scanf("%d", &id);

    for (int i = 0; i < 15; ++i) {
        if (id == 0 || id > 50){
            hasClient =  0;
            break;
        }

        if (Clients[i].id == id){
            hasClient = 1;
            break;
        }
    }

    if(!hasClient){
        printf("Cliente nao encontrada");
        return;
    }

    int currentId = id - 1;

    printf("Insira o nome do cliente: \n");
    printf("Nome: ");
    fflush(stdin);
    fgets(Clients[currentId].name, sizeof(Clients[currentId].name), stdin);

    printf("Insira o numero de contato do cliente \n");
    printf("Numero: ");
    scanf("%d", &Clients[currentId].contact);

    printf("Insira o cpf do cliente \n");
    printf("Cpf: ");
    scanf("%d", &Clients[currentId].cpf);

}

void deleteClient(){
    int id;
    int hasClient = 0;
    int hasClientInSale = 0;
    printf("Id do cliente que voce deseja excluir \n");
    printf("ID: ");
    scanf("%d", &id);

    for (int i = 0; i < 15; ++i) {
        if (id == 0 || id > 15){
            hasClient =  0;
            break;
        }

        if (Clients[i].id == id){
            hasClient = 1;
            break;
        }
    }

    if(!hasClient){
        printf("Cliente nao encontrada");
        return;
    }

    for (int i = 0; i < 50; ++i) {
        if (Sales[i].clientId == id){
            hasClientInSale = 1;
            break;
        }
    }

    if (hasClientInSale){
        printf("Este cliente esta associado a uma venda, voce nao apagar este usuario \n");
        return;
    }

    int currentId = id - 1;

    Clients[currentId].id = 0;
    strcpy(Clients[currentId].name, "");
    Clients[currentId].cpf = 0;
    Clients[currentId].contact = 0;

}