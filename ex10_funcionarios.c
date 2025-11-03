#include <stdio.h>

int main() {
    int ids[10];
    double salarios[10];
    int n, i, opcao;

    printf("Quantos funcionarios voce vai cadastrar (1 a 10)? ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Valor invalido. Rode o programa novamente e escolha entre 1 e 10.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Digite o id (numero inteiro): ");
        scanf("%d", &ids[i]);
        printf("Digite o salario: R$ ");
        scanf("%lf", &salarios[i]);
    }

    do {
        printf("\n=== Menu RH (cadastro) ===\n");
        printf("1) Listar todos (id e salario)\n");
        printf("2) Mostrar maior salario e seu id\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nLista de funcionarios:\n");
            for (i = 0; i < n; i++) {
                printf("Id: %d  -  Salario: R$ %.2f\n", ids[i], salarios[i]);
            }
        }
        else if (opcao == 2) {
            int idxMaior = 0;
            for (i = 1; i < n; i++) {
                if (salarios[i] > salarios[idxMaior]) {
                    idxMaior = i;
                }
            }
            printf("\nMaior salario: R$ %.2f  (Id: %d)\n", salarios[idxMaior], ids[idxMaior]);
        }
        else if (opcao == 0) {
            printf("\nEncerrando... Ate logo!\n");
        }
        else {
            printf("\nOpcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
