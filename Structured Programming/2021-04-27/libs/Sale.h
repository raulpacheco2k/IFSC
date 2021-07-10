int getTotalProductsInSale(int id);
void listSaleStatus();

void createSale(){
    int id;
    int currentId;
    int isPossibleCreate = 0;

    for(int x = 0; x < 50; x++){
        if(Sales[x].id == 0){
            id = x + 1;
            currentId = id - 1;
            isPossibleCreate = 1;
            Sales[x].id = id;
            break;
        }
    }

    if(!isPossibleCreate){
        printf("Voce atingiu o limite de cadastrados \n");
        return;
    }

    printf("Insira a data da compra \n");
    printf("Data: ");
    fflush(stdin);
    fgets(Sales[currentId].date, sizeof(Sales[currentId].date), stdin);
    printf("\n");

    printf("Insira o id do cliente: \n");
    printf("Id: ");
    scanf("%d", &Sales[currentId].clientId);
    printf("\n");

    printf("Insira a situacao da compra \n");
    listSaleStatus();
    printf("Situacao: ");
    scanf("%d", &Sales[currentId].status);
    printf("\n");

    int continueLoop = 0, productId, validProduct, quantity;
    int i = 0;

    do {
        continueLoop = 0;

        printf("ID do produto a ser inserido  \n");
        printf("ID: ");
        scanf("%d", &productId);

        printf("Quantidade do produto \n");
        printf("Quantidade: ");
        scanf("%d", &quantity);

        for (int j = 0; j < 50; ++j) {
            validProduct = 0;

            if (productId == 0 || productId > 50) break;
            if (Products[productId - 1].id == productId){
                validProduct = 1;
                break;
            }
        }

        if (!validProduct){
            printf("Produto invalido, tente novamente");
        }

        if(Products[productId - 1].stock < quantity){
            printf("Estoque do produto insuficiente \n");

        }

        if (!validProduct || Products[productId - 1].stock < quantity){
            int option;
            printf("Ocorreu um erro durante o cadastro deste produto, deseja continuar o cadastro e tentar novamente?\n");
            printf("1 - Sim \n");
            printf("0 - Nao \n");
            printf("Opcao: ");
            scanf("%d", &option);
            continueLoop = option;
            continue;
        }

        SalesProducts[salesProductsLastArray].saleId = id;
        SalesProducts[salesProductsLastArray].productId = productId;
        SalesProducts[salesProductsLastArray].quantity = quantity;
        SalesProducts[salesProductsLastArray].price = Products[productId - 1].price;
        salesProductsLastArray++;
        SalesProducts[salesProductsLastArray].id = salesProductsLastArray+1;

        Sales[currentId].total += (int)quantity * (float)Products[productId - 1].price;

        Products[productId - 1].stock -= quantity;

        printf("Continuar inserindo produtos? \n");
        printf("1: Sim \n");
        printf("0 Nao \n");
        printf("Opcao: ");
        scanf("%d", &continueLoop);
        i++;
    } while (continueLoop && i != 5);

}

void listSales(){
    printf("\n\n");

    for (int i = 0; i < 50; ++i) {
        if(Sales[i].id == 0) continue;

        printf("ID: %d \n", Sales[i].id);
        printf("DATA: %s", Sales[i].date);
        printf("ID DO CLIENTE: %d \n", Sales[i].clientId);
        printf("STATUS: %d \n", Sales[i].status);
        printf("TOTAL: %.2f \n", Sales[i].total);
        printf("\n");
    }
}

void updateSale(){
    int id;
    int hasSale = 0;
    printf("Id do venda que voce deseja atualizar \n");
    printf("ID: ");
    scanf("%d", &id);

    for (int i = 0; i < 50; ++i) {
        if (id == 0 || id > 50){
            hasSale =  0;
            break;
        }

        if (Sales[i].id == id){
            hasSale = 1;
            break;
        }
    }

    if(!hasSale){
        printf("Venda nao encontrada");
        return;
    }

    int currentId = id - 1;

    printf("Insira a data da compra \n");
    printf("Data: ");
    fflush(stdin);
    fgets(Sales[currentId].date, sizeof(Sales[currentId].date), stdin);
    printf("\n");

    printf("Insira o id do cliente: \n");
    printf("Id: ");
    scanf("%d", &Sales[currentId].clientId);
    printf("\n");

    printf("Insira a situacao da compra \n");
    listSaleStatus();
    printf("Situacao: ");
    scanf("%d", &Sales[currentId].status);
    printf("\n");

    int continueLoop = 0, productId, validProduct, quantity;
    int i = getTotalProductsInSale(id);

    if (i < 5){
        do {
            continueLoop = 0;

            printf("ID do produto a ser inserido  \n");
            printf("ID: ");
            scanf("%d", &productId);

            printf("Quantidade do produto \n");
            printf("Quantidade: ");
            scanf("%d", &quantity);

            for (int j = 0; j < 50; ++j) {
                validProduct = 0;

                if (productId == 0 || productId > 50) break;
                if (Products[productId - 1].id == productId){
                    validProduct = 1;
                    break;
                }
            }

            if (!validProduct){
                printf("Produto invalido, tente novamente");
            }

            if(Products[productId - 1].stock < quantity){
                printf("Estoque do produto insuficiente \n");

            }

            if (!validProduct || Products[productId - 1].stock < quantity){
                int option;
                printf("Ocorreu um erro durante o cadastro deste produto, deseja continuar o cadastro e tentar novamente?\n");
                printf("1 - Sim \n");
                printf("0 - Nao \n");
                printf("Opcao: ");
                scanf("%d", &option);
                continueLoop = option;
                continue;
            }

            SalesProducts[salesProductsLastArray].saleId = id;
            SalesProducts[salesProductsLastArray].productId = productId;
            SalesProducts[salesProductsLastArray].quantity = quantity;
            SalesProducts[salesProductsLastArray].price = Products[productId - 1].price;
            salesProductsLastArray++;
            SalesProducts[salesProductsLastArray].id = salesProductsLastArray+1;

            Sales[currentId].total += (int)quantity * (float)Products[productId - 1].price;

            Products[productId - 1].stock -= quantity;

            printf("Continuar inserindo produtos? \n");
            printf("1: Sim \n");
            printf("0 Nao \n");
            printf("Opcao: ");
            scanf("%d", &continueLoop);
            i++;
        } while (continueLoop && i != 5);
    }

}

void updateSaleStatus(){
    int id;
    int hasSale = 0;
    printf("Id da venda que voce deseja atualizar o status \n");
    printf("ID: ");
    scanf("%d", &id);
    printf("\n");

    for (int i = 0; i < 50; ++i) {
        if (id == 0 || id > 50) break;

        if (Sales[i].id == id){
            hasSale = 1;
            break;
        }
    }

    if(!hasSale){
        printf("Venda nao encontrada");
        return;
    }

    printf("Insira a situacao da compra \n");
    listSaleStatus();
    printf("Situacao: ");
    scanf("%d", &Sales[id - 1].status);
    printf("\n");
}

void deleteSale(){
    int id;
    int hasSale = 0;

    printf("Id da venda que voce deseja excluir \n");
    printf("ID: ");
    scanf("%d", &id);

    for (int i = 0; i < 50; ++i) {
        if (id == 0 || id > 50){
            hasSale =  0;
            break;
        }

        if (Sales[i].id == id){
            hasSale = 1;
            break;
        }
    }

    if(!hasSale){
        printf("Venda nao encontrada");
        return;
    }

    int currentId = id - 1;

    for (int i = 0; i < MAX_SALES_PRODUCTS; ++i) {
        if (SalesProducts[i].saleId == 0 || SalesProducts[i].saleId != id) continue;
        if (SalesProducts[i].saleId == id){
            int productId = SalesProducts[i].productId - 1;
            Products[productId].stock += SalesProducts[i].quantity;

            SalesProducts[i].quantity = 0;
            SalesProducts[i].saleId = 0;
            SalesProducts[i].productId = 0;
            SalesProducts[i].price = 0;
        }
    }

    Sales[currentId].id = 0;
    Sales[currentId].total = 0;
    Sales[currentId].clientId = 0;
    strcpy(Sales[currentId].date, "");

}

void getCountOfSales(){
    int total = 0;
    for (int i = 0; i < 50; ++i) {
        if (Sales[i].id == 0) continue;
        total++;
    }

    printf("\nTotal das vendas: %d \n\n", total);
}

void getTotalOfSales(){
    float total = 0;
    for (int i = 0; i < 50; ++i) {
        if (Sales[i].id == 0) continue;
        total += Sales[i].total;
    }

    printf("\nTotal das vendas: %.2f \n\n", total);
}

void getCountOfSalesOpened(){
    int total = 0;
    for (int i = 0; i < 50; ++i) {
        if (Sales[i].id == 0 || Sales[i].status != 1) continue;
        total++;
    }

    printf("\nTotal das vendas: %d \n\n", total);
}

void getCountOfSalesClosed(){
    int total = 0;
    for (int i = 0; i < 50; ++i) {
        if (Sales[i].id == 0 || Sales[i].status != 2) continue;
        total++;
    }

    printf("\nTotal das vendas: %d \n\n", total);
}

void getMoreExpensiveSale(){
    float total = 0;
    int id = 0;
    for (int i = 0; i < 50; ++i) {
        if (Sales[i].id == 0 || Sales[i].total < total) continue;
        total = Sales[i].total;
        id = i;
    }

    printf("ID: %d \n", Sales[id].id);
    printf("DATA: %s", Sales[id].date);
    printf("ID DO CLIENTE: %d \n", Sales[id].clientId);
    printf("STATUS: %d \n", Sales[id].status);
    printf("TOTAL: %.2f \n", Sales[id].total);
    printf("\n");
}

int getTotalProductsInSale(int id){
    int total = 0;
    for (int i = 0; i < MAX_SALES_PRODUCTS; ++i) {
        if (SalesProducts[i].saleId || SalesProducts[i].saleId != id) continue;
        if (SalesProducts[i].saleId == id) total++;
    }

    return total;
}

void listSaleStatus(){
    printf("\n\n");
    printf("1 - Em aberto \n");
    printf("2 - Pago \n");
    printf("\n\n");
};