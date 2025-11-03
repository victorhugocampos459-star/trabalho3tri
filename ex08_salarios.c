#include <stdio.h>

int main() {
    float salarios[10], soma = 0, media;
    int n, i, opcao;

    printf("Quantos salarios voce vai digitar (1 a 10)? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Digite o salario %d: R$ ", i + 1);
        scanf("%f", &salarios[i]);
        soma += salarios[i];
    }

    do {
        printf("\n=== Menu de Salarios ===\n");
        printf("1) Listar salarios\n");
        printf("2) Mostrar media\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
https://accounts.google.com/b/0/AddMailService
        if(opcao == 1) {
            printf("\nLista de salarios:\n");
            for(i = 0; i < n; i++) {
                printf("Salario %d: R$ %.2f\n", i + 1, salarios[i]);
            }
        }
        else if(opcao == 2) {
            media = soma / n;
            printf("\nMedia dos salarios: R$ %.2f\n", media);
        }
        else if(opcao == 0) {
            printf("\nEncerrando o programa... Ate logo!\n");
        }
        else {
            printf("\nOpcao invalida, tente novamente.\n");
        }

    } while(opcao != 0);

    return 0;
}
