#include <stdio.h>
#include <stdlib.h>

// Criar um array bidimensional (matriz) de N x M posições do tipo inteiro.
// Para este array permita as seguintes operações através de um menu
// principal (cada operação deverá ser desenvolvida em uma função):

int matriz[3][3] = {{0,0,0}, {0,0,0}, {0,0,0}};

int showOptions();
int readMatriz();
int generateRandomValues();
int showBiggerNumber();
int showLowestNumber();
int showSumOfMatriz();
int showSumOfMatrizSpecificColumn(int column);
int showAverageOfMatriz();

int main() {
    int command, column;
    do{
        showOptions();
        printf("Escolha uma opção: ");
        scanf("%d", &command);

        printf("\n\n\n");

        switch(command){
            case 1:
                readMatriz();
                break;
            case 2:
                generateRandomValues();
                break;
            case 3:
                showBiggerNumber();
                break;
            case 4:
                showLowestNumber();
                break;
            case 5:
                showSumOfMatriz();
                break;
            case 6:
                printf("Qual coluna você deseja exibir a soma? Opções: 1, 2 e 3 \n");
                scanf("%d", &column);
                if(column >= 1 && column <= 3){
                    showSumOfMatrizSpecificColumn(column);
                }else{
                    printf("Coluna inválida");
                }
                break;
            case 7:
                showAverageOfMatriz();
                break;
        }

    printf("\n\n\n");
    }while(command != 8);

    return 0;
}

int showOptions(){
    printf("Opções disponíveis: \n");
    printf("Exibir Matriz: 1 \n");
    printf("Gerar valores aleatórios: 2 \n");
    printf("Exibir o maior número da matriz: 3 \n");
    printf("Exibir o menor número da matriz: 4 \n");
    printf("Exibir soma de todas os números da matriz: 5 \n");
    printf("Exibir soma de todos os números de uma coluna especifica da matriz: 6 \n");
    printf("Mostrar média de todos os itens da matriz: 7 \n");
    printf("Finalizar o programa: 8 \n");
    return 0;
}

int readMatriz(){
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            printf("Valor da coluna %d, linha %d: %d \n" , x + 1, y + 1, matriz[x][y]);
        }
    }
    return 0;
}

int generateRandomValues(){
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            matriz[x][y] = rand();
        }
    }
    return 0;
}

int showBiggerNumber(){
    int bigger = 0;

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            if(bigger < matriz[x][y]){
                bigger = matriz[x][y];
            }
        }
    }

    printf("O maior valor é: %d \n", bigger);

    return 0;
}

int showLowestNumber(){
    int lowest = matriz[0][1];

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            if(lowest > matriz[x][y]){
                lowest = matriz[x][y];
            }
        }
    }

    printf("O menor valor é: %d \n", lowest);

    return 0;
}

int showSumOfMatriz(){
    int soma = 0;

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            soma += matriz[x][y];
        }
    }

    printf("A soma de todos os valores é: %d", soma);

    return 0;
}

int showSumOfMatrizSpecificColumn(int column){
    column = column - 1;
    int soma;

    for(int y = 0; y < 3; y++){
        soma += matriz[column][y];
    }

    printf("A soma de todos da coluna %d os valores é: %d \n", column,  soma);

    return 0;
}

int showAverageOfMatriz(){
    int soma = 0;

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            soma += matriz[x][y];
        }
    }

    printf("A média da matriz é: %.2d", soma / 9);

    return 0;
}
