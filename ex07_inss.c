#include <stdio.h>

int main() {
    int opcao;
    float salario, inss, horas, valorHora, valorHoraExtra, totalExtra;

    do {
        printf("\n=== Menu RH ===\n");
        printf("1) Calcular INSS\n");
        printf("2) Calcular Hora Extra\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nDigite o salario do colaborador: R$ ");
            scanf("%f", &salario);

            inss = salario * 0.08;
            printf("O desconto de INSS sera de: R$ %.2f\n", inss);
        }
        else if (opcao == 2) {
            printf("\nDigite o salario do colaborador: R$ ");
            scanf("%f", &salario);
            printf("Quantas horas extras foram feitas? ");
            scanf("%f", &horas);

            valorHora = salario / 220;
            valorHoraExtra = valorHora * 1.5;
            totalExtra = horas * valorHoraExtra;

            printf("O valor total das horas extras e: R$ %.2f\n", totalExtra);
        }
        else if (opcao == 0) {
            printf("\nEncerrando o programa... Ate logo!\n");
        }
        else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
