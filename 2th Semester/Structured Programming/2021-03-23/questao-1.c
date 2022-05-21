#include <stdio.h>

int matriz[4][15] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

void cadastrar_venda();
int relatorio_de_venda();
void dias_com_mais_venda();
void total_de_vendas();

int ja_vendeu = 0;

void cadastrar_venda() {
    int vendedor;
    int dias;
    int valor;

    while(1){
      printf("\n\nNosso vendedores: ");
      printf("\n\t0 - Maria");
      printf("\n\t1 - Joao");
      printf("\n\t2 - Mathus");
      printf("\n\t3 - Gabrieli");
      printf("\nQual vendedor fez a venda? ");
      scanf("%d", &vendedor);

      if(vendedor >= 0 && vendedor <= 3){
        break;
      } else{
        printf("Vendedor não encontrado, tente novamente");
      };
    };

    while(1){
        printf("\nQual o valor da venda ? ");
        scanf("%d", &valor);

      if(valor > 0){
        break;
      } else{
        printf("\nInsira um valor maior que zero");
      };
    };
    
    printf("Dia de venda ? ");
    scanf("%d", &dias);

    if (dias >= 1 && dias <= 15) {
        matriz[vendedor][dias] = valor;
        ja_vendeu = 1;
        printf("OPERAÇÃO REALIZADA COM SUCESSO!");
    }
}

int relatorio_de_venda() {
    int vendas[15][2] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};
    int dia_com_mais_venda = 0;
    int total = vendas[0][0];
    int total_de_vendas = 0;
    int total_de_dias = 0;
    for (int x = 0; x < 15; x++) {
        for (int y = 0; y < 4; y++) {
            if (matriz[y][x] > 0) {
                vendas[x][0] += 1;
                vendas[x][1] += matriz[y][x];
                total_de_vendas += matriz[y][x];
                total_de_dias += 1;
            }
        } if (vendas[x][1] > 0 && total < vendas[x][1]) {
            total = vendas[x][1];
            dia_com_mais_venda = x;
        }
    }

    printf("Dia com mais vendas: %d \n", dia_com_mais_venda);
    printf("Média de vendas diária: %d \n", (total_de_vendas / total_de_dias));

    return (total_de_vendas / total_de_dias);
}

void dias_com_mais_venda() {
    int relatório_de_vendas = relatorio_de_venda();
    for (int x = 0; x < 15; x++) {
        int total = 0;
        for (int y = 0; y < 4; y++) {
            if (matriz[y][x] > 0) {
                total += matriz[y][x];
            }
        } if (total > relatório_de_vendas) {
            printf("O dia %d é o dia com mais vendas", x );
        }
    }
}

void total_de_vendas() {
    int vendedor[4] = {0, 0, 0, 0}; 
    int loja = 0;

    for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 15; y++) {
            if (matriz[x][y] > 0) {
                loja += 1;
                vendedor[x] += 1;
            }
        }
    } for (int x = 0; x < 4; x++) {
        printf("Total de vendas do vendedor %d: %d \n", x, vendedor[x]);
    }

    printf("Total de vendas da loja: %d \n", loja);
}

int main() {
  while(1){
    int opcao_menu;

    printf("\n\n1 - CADASTRAR VENDA \n");

    if (ja_vendeu == 1){
      printf("2 - RELATORIO DE QUANTIDADE DE VENDAS \n");
      printf("3 - RELATORIO DIA COM MAIS VENDA \n");
      printf("4 - RELATORIO DE VENDAS \n");
    };

    printf("5 - SAIR DO PROFRAMA \n");
    printf("SUA ESCOLHA: ");
    scanf("%d", &opcao_menu);


    if (ja_vendeu == 1){
      switch (opcao_menu) {
        case 1:
            cadastrar_venda();
            break;
        case 2:
            relatorio_de_venda();
            break;
        case 3:
            dias_com_mais_venda();
            break;
        case 4:
            total_de_vendas();
            break;
        case 5:
            break;
        default:
          printf("\nOpção não encontrada... Escolha novamente.\n");
      }
    } else {
      switch (opcao_menu) {
          case 1:
              cadastrar_venda();
              break;
          case 5:
              break;
          default:
            printf("\nOpção não encontrada... Escolha novamente.\n");
      };
    };
    
    if(opcao_menu == 5){
      break;
    }
  };
    

    return 0;
}