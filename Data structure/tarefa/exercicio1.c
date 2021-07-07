#include <stdio.h>
#include <stdlib.h>

struct list {
    int valor;
    struct list *proximoItem;
};

struct list *lista();

void adicionarItem(struct list *item);

int tamanhoLista(struct list *list);

int main() {
    struct list item;
    item.valor = 123;
    item.proximoItem = NULL;

    adicionarItem(&item);

    printf("%d", tamanhoLista(&item));

    return 0;
}

struct list *lista() {
    return malloc(sizeof(struct list));
}

void adicionarItem(struct list *item) {
    struct list *itemAtual, *novoItem;
    itemAtual = item;

    while (itemAtual->proximoItem != NULL) {
        itemAtual = itemAtual->proximoItem;
    }

    novoItem = lista();
    novoItem->valor = 13;
    novoItem->proximoItem = NULL;

    itemAtual->proximoItem = novoItem;
}

int tamanhoLista(struct list *list) {
    struct list *itemAtual;
    itemAtual = list;

    int contador = 1;

    while (itemAtual->proximoItem != NULL) {
        contador++;
        itemAtual = itemAtual->proximoItem;
    }

    return contador;
}