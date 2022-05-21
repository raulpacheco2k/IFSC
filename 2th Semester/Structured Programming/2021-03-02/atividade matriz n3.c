#include <stdio.h>

int main() {
    int matrizA[3][3],matrizB[3][3],matrizC[3][3];

    printf("Informações da matriz A \n");
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            printf("Informe um valor para inserir na coluna %d e linha %d: ", i, x);
            scanf("%d", &matrizA[i][x]);
        }
    }

    printf("\nInformações da matriz B \n");
    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            printf("Informe um valor para inserir na coluna %d e linha %d: ", i, x);
            scanf("%d", &matrizB[i][x]);
        }
    }


    printf("\n\n\t\tMatriz C (A+B):\n\n");

    for(int i = 0; i < 3; i++){
        printf("\t\t");
        for(int x = 0; x < 3; x++){
            matrizC[i][x] = matrizA[i][x] + matrizB[i][x];
            printf("| %d |", matrizC[i][x]);
        }
        printf("\n");
    }

    return 0;
}