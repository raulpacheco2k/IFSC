Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos. Em seguida imprima a
matrícula, o nome e a média de cada um deles.

#include <stdio.h>

#define True 1

int numberMarker = 0;

struct student {
    char name[40];
    char registration[40];
    float examGrade1;
    float examGrade2;
} student[40];

int createStudent() {
    printf("\n\nCadastro de aluno\n\n");

    printf("Nome: ");
    scanf("%s", student[numberMarker].name);

    printf("Matricula: ");
    scanf("%s", student[numberMarker].registration);

    printf("Qual a nota da prova 1: ");
    scanf("%f", student[numberMarker].examGrade1);

    printf("Qual a nota da prova 1: ");
    scanf("%f", student[numberMarker].examGrade2);

    return numberMarker += 1;
}

int showStudents(){

    printf("Listagem de alunos");

    for (int i = 0; i < numberMarker; ++i) {
        printf("------------");
        printf("Aluno %s", student[i].name);
        printf("Matricula %s", student[i].registration);
        printf("media %f", (student[i].examGrade1 / student[i].examGrade2)/2 );
    }
    return 0;
}

int main() {
    while (True){
        int option;
        printf("\nO que voce deseja fazer?\n\t1 - Cadastrar aluno\n\t2 - Listar alunos\n\t0 - Sair\nSua resposta: ");
        scanf("%i", &option);

        switch (option) {
            case 1:
                createStudent();
                break;
            case 2:
                showStudents();
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida! Tente novamente");
        }

    }
}
