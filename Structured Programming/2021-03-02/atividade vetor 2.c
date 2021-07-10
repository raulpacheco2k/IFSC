#include <stdio.h>

char* parOuImpar(numero){
    int resultado;

    resultado = numero % 2;

    if (resultado == 0) {
        return "par";
    }

    return "impar";
}

int main() {
    int matriz[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%i", &matriz[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("O %d° número digitado (%d) é %s \n", i+1, matriz[i], parOuImpar(matriz[i]));
    }

    return 0;
}