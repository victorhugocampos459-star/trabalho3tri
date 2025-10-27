#include <stdio.h>

int main() {
    int num, soma = 0, qtd = 0;
    float media;

    printf("Digite numeros (digite -1 para parar): ");
    scanf("%d", &num);

    while (num != -1) {
        soma = soma + num;
        qtd = qtd + 1;
        scanf("%d", &num);
    }

    media = (float)soma / qtd;

    printf("Quantidade: %d\n", qtd);
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}
