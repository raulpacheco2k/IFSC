#ifndef LANCHONETE_SALE_H
#define LANCHONETE_SALE_H

struct Sale{
    int id;
    int clientId;
    char date[30];
    float total;
    int status;
};

struct Sale Sales[50];

#endif //LANCHONETE_SALE_H
