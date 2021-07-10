/* Um investidor deseja criar um programa para realizar simulações de seus
investimentos. Neste ele deseja informar o valor do capital investido, a taxa
de juros mensal e o período de aplicação. A partir destes dados, o
programa deve determinar o montante e o valor de juros de cada mês
durante este período. Lembre-se que a cada mês deve ser somado ao
montante o valor dos juros referentes ao mês anterior. Ao final, exiba
quanto será o valor corrigido ao final do período. */

#include <stdio.h>
#include "lib.h"

float jurosComposto(C, I, T)

int main(void) {
  float C; // Capital
  float I; // Taxa de juros 
  int T; // Tempo
  float M; // Montante

  printf("Qual o valor do aporte? ");
  scanf("%f", &C);

  printf("Qual o juros praticado mensalmente? ");
  scanf("%f", &I);

  printf("Quantos meses você deixar seu dinehiro rendendo? ");
  scanf("%i", &T);

  printf("\nSeu montante de R$%.2f, aplicado a %.2f%% em %i meses renderá...", C, I, T);

  M = jurosComposto(C, I, T);

  printf("%.2f", M);

  return 0;
}