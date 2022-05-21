struct ProductType{
    int id;
    char title[500];
};

struct ProductType ProductTypes[3];

void storeProductTypes(){
    // Comida
    ProductTypes[0].id = 1;
    strcpy(ProductTypes[0].title, "Comida");

    // Bebida
    ProductTypes[1].id = 2;
    strcpy(ProductTypes[1].title, "Bebida");

    // Sobremesa
    ProductTypes[2].id = 3;
    strcpy(ProductTypes[2].title, "Sobremesa");
}

void listProductTypes(){
    printf("\n\n");

    for (int i = 0; i < 3; ++i) {
        printf("%d - %s \n", ProductTypes[i].id, ProductTypes[i].title);
    }

    printf("\n");
}