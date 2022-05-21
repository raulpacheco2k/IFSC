#include "../structs/productTypes.h"

void createProduct(){
    int id;
    int currentId;
    int isPossibleCreate = 0;

    for(int x = 0; x < 50; x++){
        if(Products[x].id == 0){
            id = x + 1;
            currentId = id - 1;
            isPossibleCreate = 1;
            Products[x].id = id;
            break;
        }
    }

    if(!isPossibleCreate){
        printf("Voce atingiu o limite de cadastrados \n");
        return;
    }

    printf("Insira descricao do produto \n");
    printf("Descricao: ");
    fflush(stdin);
    fgets(Products[currentId].description, sizeof(Products[currentId].description), stdin);
    printf("\n");

    printf("Insira o preco do produto \n");
    printf("Preco: ");
    scanf("%f", &Products[currentId].price);
    printf("\n");

    printf("Insira o estoque do produto \n");
    printf("Estoque: ");
    scanf("%d", &Products[currentId].stock);
    printf("\n");

    printf("Insira o tipo do produto \n");
    listProductTypes();
    printf("Tipo: ");
    scanf("%d", &Products[currentId].type);
    printf("\n");

}

void listProducts(){
    printf("\n\n");

    printf("Produtos: \n");

    for (int i = 0; i < 50; ++i) {
        if(Products[i].id == 0) continue;

        printf("ID: %d \n", Products[i].id);
        printf("DESCRICAO: %s", Products[i].description);
        printf("PRECO: %.2f \n", Products[i].price);
        printf("TIPO: %d \n", Products[i].type);
        printf("ESTOQUE: %d \n", Products[i].stock);
        printf("\n");
    }
}

void updateProduct(){
    int id;
    int hasProduct = 0;
    printf("Id do produto que voce deseja atualizar \n");
    printf("ID: ");
    scanf("%d", &id);

    for (int i = 0; i < 50; ++i) {
        if (id == 0 || id > 50){
            hasProduct =  0;
            break;
        }

        if (Products[i].id == id){
            hasProduct = 1;
            break;
        }
    }

    if(!hasProduct){
        printf("Cliente nao encontrada");
        return;
    }

    int currentId = id - 1;

    printf("Insira descricao do produto \n");
    printf("Descricao: ");
    fflush(stdin);
    fgets(Products[currentId].description, sizeof(Products[currentId].description), stdin);
    printf("\n");

    printf("Insira o preco do produto \n");
    printf("Preco: ");
    scanf("%f", &Products[currentId].price);
    printf("\n");

    printf("Insira o estoque do produto \n");
    printf("Estoque: ");
    scanf("%d", &Products[currentId].stock);
    printf("\n");

    printf("Insira o tipo do produto \n");
    listProductTypes();
    printf("Tipo: ");
    scanf("%d", &Products[currentId].type);
    printf("\n");

    printf("Produto atualizado com sucesso. \n");
}

void deleteProduct(){
    int id;
    int hasProduct = 0;
    int hasProductInSale = 0;

    printf("Id do produto que voce deseja excluir \n");
    printf("ID: ");
    scanf("%d", &id);

    for (int i = 0; i < 15; ++i) {
        if (id == 0 || id > 50){
            hasProduct =  0;
            break;
        }

        if (Products[i].id == id){
            hasProduct = 1;
            break;
        }
    }

    if(!hasProduct){
        printf("Produto nao encontrada");
        return;
    }

    for (int i = 0; i < 50; ++i) {
        if (SalesProducts[i].productId == id){
            hasProductInSale = 1;
            break;
        }
    }

    if (hasProductInSale){
        printf("Este produto esta associado a uma venda, voce nao apagar este produto \n");
        return;
    }

    int currentId = id - 1;

    Products[currentId].id = 0;
    strcpy(Products[currentId].description, "");
    Products[currentId].stock = 0;
    Products[currentId].type = 0;
    Products[currentId].price = 0;

    printf("Produto excluido com sucesso.");
}