#ifndef LANCHONETE_CLIENT_H
#define LANCHONETE_CLIENT_H

struct Client{
    int id;
    char name[500];
    int contact;
    int cpf;
};

struct Client Clients[15];

#endif //LANCHONETE_CLIENT_H
