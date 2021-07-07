#include <stdio.h>

int numberMarker= 0;

#define True 1

struct Person {
    char nome[55];
    char altura[55];
    char peso[55];
    int cpf[1];
    char sexo[55];
} person[40];

int createPerson() {
    printf("\n\nCadastro de pessoa\n\n");

    printf("Nome: ");
    scanf("%s", person[numberMarker].nome);

    printf("Altura: ");
    scanf("%s", person[numberMarker].altura);

    printf("peso: ");
    scanf("%s", person[numberMarker].peso);

    printf("cpf: ");
    scanf("%i", person[numberMarker].cpf);

    printf("sexo: ");
    scanf("%s", person[numberMarker].sexo);
    return numberMarker += 1;
}

int showPersons(){
    int cpf[1];

    printf("Qual o CPF da pessoa");
    scanf("%i", cpf);

    for (int i = 0; i < numberMarker; ++i) {
        printf("%i", &person[i].cpf[1]);
        if (cpf == person[i].cpf){
            printf("IMC: 123");
        }
    }
    return 0;
}

int main() {
    while (True){
        int option;
        printf("\nO que voce deseja fazer?\n\t1 - Cadastrar pessoa\n\t2 - Listar pessoas\n\t0 - Sair\nSua resposta: ");
        scanf("%i", &option);

        switch (option) {
            case 1:
                createPerson();
                break;
            case 2:
                showPersons();
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida! Tente novamente");
        }
    }
}