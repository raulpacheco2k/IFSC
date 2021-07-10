/* Crie um programa que recebe duas strings (uma contendo uma frase e
outra contendo uma palavra). Você deve então determinar o número de
vezes que a palavra ocorre na referida frase.
Exemplo:
Para a palavra ELA e a frase:
GABRIELA E DANIELA VISITARAM A CAPELA DE JOÃO PESSOA.
Temos que a palavra ocorre 3 vezes na frase */

#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

int main(){
    char frase[100], palavra[100];
    int palavraEncontrada = 0, j, i;
    int encontrada;

    printf("Digite uma frase:");
    gets(frase);

    printf("Digite uma palavra:");
    gets(palavra);

    j = -1;

    for(i = 0; frase[i] != '\0'; i++) {
        j++;

        encontrada = FALSE;

        if(palavra[j] != frase[i]){
            j = -1;
            continue;
        }

        if(palavra[j+1] == '\0'){
            palavraEncontrada++;
            j = -1;
            encontrada = TRUE;
        }
        
        if(frase[i+1] != palavra[0] && encontrada){
            i--;
        }
    }

    printf("A palavra foi encontada %d vezes na frase.", palavraEncontrada);

    return 0;
}