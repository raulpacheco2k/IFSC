#include <stdio.h>

int main() {
    int valores[5], ordenacao;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%i", &valores[i]);
    }

    for(int m = 0; m < 5; m++){
        for(int n = m; n < 5; n++){
            if(valores[m] < valores[n]){
                continue;
            }else if(valores[m] > valores[n]){
                ordenacao = valores[m];
                valores[m] = valores[n];
                valores[n] = ordenacao;
            }
        }
        printf("Posicao %d: %d\n", m, valores[m]);
    }

    return 0;
}