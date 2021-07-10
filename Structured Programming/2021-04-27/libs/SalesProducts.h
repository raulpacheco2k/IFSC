void listSalesProducts();

void createSalesProducts(){
    int id;
    int hasSale = 0;

    printf("Insira do id da venda que voce deseja adicionar produtos \n");
    printf("ID: ");
    scanf("%d", &id);

    for (int i = 0; i < 50; ++i) {
        if (id == 0) break;
        if (Sales[i].id == 0 || Sales[i].id != id) continue;
        if (Sales[i].id == id){
            hasSale = 1;
            break;
        }
    }

    if (!hasSale){
        printf("Venda nao encontrada. \n");
        return;
    }

    int currentId = id - 1;
    int totalProductsInSale = 0;
    int continueLoop = 0;

    for (int i = 0; i < MAX_SALES_PRODUCTS; ++i) {
        if (SalesProducts[i].saleId == 0 || SalesProducts[i].saleId != id) continue;
        if (SalesProducts[i].saleId == id) totalProductsInSale++;
    }

    if (totalProductsInSale >= 5){
        printf("Esta venda atingiu o maximo de produtos \n");
        return;
    }

    do {
        int productId = 0;
        int quantity = 0;
        int validProduct = 0;

        continueLoop = 0;

        printf("ID do produto a ser inserido  \n");
        printf("ID: ");
        scanf("%d", &productId);
        printf("\n");

        printf("Quantidade do produto \n");
        printf("Quantidade: ");
        scanf("%d", &quantity);
        printf("\n");

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
        totalProductsInSale++;
    } while (continueLoop && totalProductsInSale != 5);

}

void updateSalesProducts(){
    int id;
    int hasSale = 0;

    printf("Insira do id da venda que voce deseja editar \n");
    printf("ID: ");
    scanf("%d", &id);

    for (int i = 0; i < 50; ++i) {
        if (id == 0) break;
        if (Sales[i].id == 0 || Sales[i].id != id) continue;
        if (Sales[i].id == id){
            hasSale = 1;
            break;
        }
    }

    if (!hasSale){
        printf("Venda nao encontrada. \n");
        return;
    }

    int currentId = id - 1;
    int totalProductsInSale = 0;
    int continueLoop = 0;
    int hasSalesProducts;

    for (int i = 0; i < MAX_SALES_PRODUCTS; ++i) {
        if (SalesProducts[i].saleId == 0 || SalesProducts[i].saleId != id) continue;
        if (SalesProducts[i].saleId == id) totalProductsInSale++;
    }

    if (totalProductsInSale >= 5){
        printf("Esta venda atingiu o maximo de produtos \n");
        return;
    }

    do {
        int productId = 0;
        int quantity = 0;
        int validProduct = 0;

        continueLoop = 0;

        printf("ID do produto a ser inserido  \n");
        printf("ID: ");
        scanf("%d", &productId);
        printf("\n");

        printf("Quantidade do produto \n");
        printf("Quantidade: ");
        scanf("%d", &quantity);
        printf("\n");

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
        totalProductsInSale++;
    } while (continueLoop && totalProductsInSale != 5);

}

void listSalesProducts(){
    printf("\n\n");

    for (int i = 0; i < MAX_SALES_PRODUCTS; ++i) {
        if (SalesProducts[i].saleId == 0) continue;

        printf("Id: %d \n", SalesProducts[i].id);
        printf("Venda: %d \n", SalesProducts[i].saleId);
        printf("Produto: %d \n", SalesProducts[i].productId);
        printf("Quantidade: %d \n", SalesProducts[i].quantity);
        printf("Preco: %.2f \n", SalesProducts[i].price);
        printf("\n");
    }
}