#include <stdio.h>

int main() {
    float vendas[2][2];
    int i, j, opcao;
    float total_filial, total_mes, total_geral = 0;

    printf("Digite os valores das vendas (R$):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Filial %d - Mes %d: R$ ", i + 1, j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    do {
        printf("\n=== Menu de Vendas ===\n");
        printf("1) Total por filial\n");
        printf("2) Total por mes\n");
        printf("3) Total geral\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            for(i = 0; i < 2; i++) {
                total_filial = 0;
                for(j = 0; j < 2; j++) {
                    total_filial += vendas[i][j];
                }
                printf("Total da filial %d: R$ %.2f\n", i + 1, total_filial);
            }
        }
        else if(opcao == 2) {
            for(j = 0; j < 2; j++) {
                total_mes = 0;
                for(i = 0; i < 2; i++) {
                    total_mes += vendas[i][j];
                }
                printf("Total do mes %d: R$ %.2f\n", j + 1, total_mes);
            }
        }
        else if(opcao == 3) {
            total_geral = 0;
            for(i = 0; i < 2; i++) {
                for(j = 0; j < 2; j++) {
                    total_geral += vendas[i][j];
                }
            }
            printf("Total geral das vendas: R$ %.2f\n", total_geral);
        }
        else if(opcao == 0) {
            printf("Encerrando o programa... Ate logo!\n");
        }
        else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while(opcao != 0);

    return 0;
}
