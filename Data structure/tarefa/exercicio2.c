#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
    int valor;
    struct list *proximo;
};

struct list *lista();

void adicionarItem(struct list *item);

int tamanhoLista(struct list *list, int condicao);

int main() {
    int condicao = 0;
    struct list item;
    item.valor = 123;

    int exit = 0;
    while (exit != 1) {
        adicionarItem(&item);
        printf("\n");
        printf("Digite '1' para sair da criação da lista, digite 0 para continuar:");
        scanf("%d", &exit);
    }

    printf("\n");
    printf("Digite valor inteiro para a condição");
    scanf("%d", &condicao);
    printf("\n");
    printf("Resultado: %d", tamanhoLista(&item, condicao));

    free(lista());

    return 0;
}

struct list *lista() {
    return malloc(sizeof(struct list));
}

void adicionarItem(struct list *item) {
    struct list *itemAtual, *novoItem;
    itemAtual = item;

    while (itemAtual->proximo != NULL) {
        itemAtual = itemAtual->proximo;
    }

    printf("\n");
    novoItem = lista();
    printf("Digite um valor inteiro para adicionar o novo item: ");
    scanf("%d", &novoItem->valor);
    novoItem->proximo = NULL;

    itemAtual->proximo = novoItem;
}

int tamanhoLista(struct list *list, int condicao) {
    struct list *itemAtual;
    itemAtual = list;

    int count = 0;
    while (itemAtual->proximo != NULL) {
        if (itemAtual->proximo->valor > condicao) {
            count++;
        }

        if (itemAtual->proximo != NULL) {
            break;
        }

        itemAtual = itemAtual->proximo;
    }

    return count;
}

