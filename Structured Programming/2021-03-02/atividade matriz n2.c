#include <stdio.h>

int main() {
    int matriz[3][3], total;

    for(int i = 0; i < 3; i++){
        for(int x = 0; x < 3; x++){
            if(total >= 50)break;
            printf("Informe um valor para inserir na coluna %d e linha %d: ", i, x);
            scanf("%d", &matriz[i][x]);
            total += matriz[i][x];
        }
    }

    printf("\nTotal: %d \n", total);

    return 0;
}