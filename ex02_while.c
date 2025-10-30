#include <stdio.h>

int main() {
    int num, soma = 0, qtd = 0;
    float media;

    printf("Digite numeros inteiros (-1 para encerrar): ");
    scanf("%d", &num);

    while (num != -1) {
        soma = soma + num;
        qtd = qtd + 1;
        scanf("%d", &num);
    }

    if (qtd > 0) {
        media = (float)soma / qtd;
        printf("Quantidade: %d\n", qtd);
        printf("Soma: %d\n", soma);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }

    return 0;
}
