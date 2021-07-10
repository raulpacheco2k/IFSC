#ifndef LANCHONETE_PRODUCT_H
#define LANCHONETE_PRODUCT_H

struct Product{
    int id;
    char description[500];
    float price;
    int type;
    int stock;
};

struct Product Products[50];

#endif //LANCHONETE_PRODUCT_H
