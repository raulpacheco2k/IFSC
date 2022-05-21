void showMenuOptions();

const int CREATE_CLIENT = 1;
const int LIST_CLIENTS = 2;
const int UPDATE_CLIENT = 3;
const int DELETE_CLIENT = 4;

const int CREATE_PRODUCT = 5;
const int LIST_PRODUCTS = 6;
const int UPDATE_PRODUCT = 7;
const int DELETE_PRODUCT = 8;

const int CREATE_SALE = 9;
const int LIST_SALES = 10;
const int UPDATE_SALE = 11;
const int UPDATE_SALE_STATUS = 12;
const int DELETE_SALE = 13;

const int CREATE_SALES_PRODUCTS = 14;
const int LIST_SALES_PRODUCTS = 15;

const int REPORT_CLIENTS = 16;
const int REPORT_CLIENTS_WITH_COUNT_SALES = 17;
const int REPORT_TOTAL_OF_SALES = 18;
const int REPORT_TOTAL_OF_SALES_OPENED = 19;
const int REPORT_TOTAL_OF_SALES_CLOSED = 20;
const int REPORT_SALES_PRODUCTS = 21;
const int REPORT_MOST_EXPENSIVE_SALE = 22;

const int EXIT_SYSTEM = 0;

int option = 0;

void handleMenu(){

    while (1){
        printf("\n\n");
        printf("Escolha uma opcao \n");
        showMenuOptions();

        printf("Opcao: ");
        scanf("%d", &option);
        printf("\n\n");

        if (option == CREATE_CLIENT) createClient();
        if (option == LIST_CLIENTS) listClients();
        if (option == UPDATE_CLIENT) updateClient();
        if (option == DELETE_CLIENT) deleteClient();

        if (option == CREATE_PRODUCT) createProduct();
        if (option == LIST_PRODUCTS) listProducts();
        if (option == UPDATE_PRODUCT) updateProduct();
        if (option == DELETE_PRODUCT) deleteProduct();

        if (option == CREATE_SALE) createSale();
        if (option == LIST_SALES) listSales();
        if (option == UPDATE_SALE) updateSale();
        if (option == UPDATE_SALE_STATUS) updateSaleStatus();
        if (option == DELETE_SALE) deleteSale();

        if (option == REPORT_CLIENTS) listClients();
        if (option == REPORT_CLIENTS_WITH_COUNT_SALES) listClientsWithCountSales();

        if (option == CREATE_SALES_PRODUCTS) createSalesProducts();
        if (option == LIST_SALES_PRODUCTS) listSalesProducts();
        if (option == REPORT_TOTAL_OF_SALES) getTotalOfSales();
        if (option == REPORT_TOTAL_OF_SALES_OPENED) getCountOfSalesOpened();
        if (option == REPORT_TOTAL_OF_SALES_CLOSED) getCountOfSalesClosed();
        if (option == REPORT_SALES_PRODUCTS) listSalesProducts();
        if (option == REPORT_MOST_EXPENSIVE_SALE) getMoreExpensiveSale();

        if (option == EXIT_SYSTEM) break;
    }

}

void showMenuOptions(){
    printf(" ----- MENU -----\n");
    printf("\n");

    printf("\t Clientes \n");
    printf("\t %d - Criar \n", CREATE_CLIENT);
    printf("\t %d - Listar \n", LIST_CLIENTS);
    printf("\t %d - Atualizar \n", UPDATE_CLIENT);
    printf("\t %d - Excluir \n", DELETE_CLIENT);
    printf("\n");

    printf("\t Produtos \n");
    printf("\t %d - Criar \n", CREATE_PRODUCT);
    printf("\t %d - Listar \n", LIST_PRODUCTS);
    printf("\t %d - Atualizar \n", UPDATE_PRODUCT);
    printf("\t %d - Excluir \n", DELETE_PRODUCT);
    printf("\n");

    printf("\t Vendas \n");
    printf("\t %d - Criar \n", CREATE_SALE);
    printf("\t %d - Listar \n", LIST_SALES);
    printf("\t %d - Atualizar \n", UPDATE_SALE);
    printf("\t %d - Atualizar status \n", UPDATE_SALE_STATUS);
    printf("\t %d - Excluir \n", DELETE_SALE);
    printf("\n");

    printf("\t Vendas x Produtos\n");
    printf("\t %d - Criar \n", CREATE_SALES_PRODUCTS);
    printf("\t %d - Listar \n", LIST_SALES_PRODUCTS);
    printf("\n");

    printf("\t Relatorios\n");
    printf("\t %d - Cliente \n", REPORT_CLIENTS);
    printf("\t %d - Vendas por Cliente \n", REPORT_CLIENTS_WITH_COUNT_SALES);
    printf("\t %d - Vendas Total \n", REPORT_TOTAL_OF_SALES);
    printf("\t %d - Vendas Em Aberto \n", REPORT_TOTAL_OF_SALES_OPENED);
    printf("\t %d - Vendas Fechadas \n", REPORT_TOTAL_OF_SALES_CLOSED);
    printf("\t %d - Itens de pedido \n", REPORT_SALES_PRODUCTS);
    printf("\t %d - Maior Pedido \n", REPORT_MOST_EXPENSIVE_SALE);
    printf("\n");

    printf("\t %d - Finalizar execucao do sistema \n", EXIT_SYSTEM);

    printf("\n");
}