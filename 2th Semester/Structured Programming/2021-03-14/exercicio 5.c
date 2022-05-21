#include <stdio.h>

int main() {
    int assentos[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 10; i++){
        int option = 0;
        int allocated = 0;
        int assento = 0;
        int changeOption = 0;

        printf("\n\nPressione 1 para econômico \n");
        printf("Pressione 2 para executivo \n");
        printf("Escolha uma opção: ");
        scanf("%d", &option);

        if(option == 1){
            for(int x = 0; x < 5; x++){
                if(!assentos[x]){
                    assentos[x] = 1;
                    allocated = 1;
                    assento = x;
                    break;
                }
            }

            if(!allocated){
                printf("\n\nA classe econômica esta cheia, deseja inserir esse passageiro na classe executiva ? \n");
                printf("Digite 1 para confirmar e qualquer outra coisa para negar: \n");
                scanf("%d", &changeOption);

                if(changeOption == 1){
                    for(int x = 5; x < 10; x++){
                        if(!assentos[x]){
                            assentos[x] = 1;
                            allocated = 1;
                            option = 2;
                            assento = x;
                            break;
                        }
                    }
                }
            }
        }else if(option == 2){
            for(int x = 5; x < 10; x++){
                if(!assentos[x]){
                    assentos[x] = 1;
                    allocated = 1;
                    assento = x;
                    break;
                }
            }

            if(!allocated){
                printf("\n\nA classe executiva esta cheia, deseja inserir esse passageiro na classe econômica ? \n");
                printf("Digite 1 para confirmar e qualquer outra coisa para negar: \n");
                scanf("%d", &changeOption);

                if(changeOption == 1){
                    for(int x = 5; x < 10; x++){
                        if(!assentos[x]){
                            assentos[x] = 1;
                            allocated = 1;
                            option = 1;
                            assento = x;
                            break;
                        }
                    }
                }
            }
        }else{
            i--;
            continue;
        }

        if(allocated){
            printf("\n\n");

            printf("--- Ticket ---\n");
            printf("Poltrona: %d \n", assento + 1);
            printf("Classe %s \n", option == 1 ? "Ecônomica" : "Executiva");

            printf("\n\n");
        }else{
            i--;
            printf("\n\nAguarde o próximo voo!!! \n\n");
        }
    }

    return 0;
}
