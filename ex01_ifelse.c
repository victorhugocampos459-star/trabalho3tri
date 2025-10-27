#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O número é positivo.\n");
    } else if (num < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    if (num % 2 == 0) {
        printf("O número é par.\n");
    } else {
        printf("O número é ímpar.\n");
    }

    return 0;
}
