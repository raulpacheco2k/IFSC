// Implemente uma função que retorne o último valor de uma lista
// encadeada de inteiros. Essa função deve obedecer ao protótipo:
// int ultimo (Lista* l);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
    int value;
    struct list *prox;
};

struct list *lista();

void adicionarItem(struct list *item);

int pegaUltimoItem(struct list *list);

int main() {
    struct list item;

    item.value = 123;
    item.prox = NULL;

    int exit = 0;
    while (exit != 1) {
        adicionarItem(&item);

        printf("\n");
        printf("Digite 1 para sair da criação de lista e 0 para continuar: ");
        scanf("%d", &exit);
    }

    printf("\n");
    printf("Result: %d", pegaUltimoItem(&item));

    free(lista());

    return 0;
}

struct list *lista() {
    return malloc(sizeof(struct list));
}

void adicionarItem(struct list *item) {
    struct list *itemAtual, *novoItem;
    itemAtual = item;

    while (itemAtual->prox != NULL) {
        itemAtual = itemAtual->prox;
    }

    printf("\n");
    novoItem = lista();
    printf("Digite um valor inteiro para o novo item: ");
    scanf("%d", &novoItem->value);
    novoItem->prox = NULL;

    itemAtual->prox = novoItem;
}

int pegaUltimoItem(struct list *list) {
    struct list *itemAtual;
    itemAtual = list;

    do {
        itemAtual = itemAtual->prox;
    } while (itemAtual->prox != NULL);

    return itemAtual->value;
}

