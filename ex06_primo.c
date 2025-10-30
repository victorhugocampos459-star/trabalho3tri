#include <stdio.h>

int main() {
    int n, i, ehPrimo = 1;

    printf("Digite um numero maior ou igual a 2: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            ehPrimo = 0;
            break;
        }
    }

    if (ehPrimo == 1)
        printf("%d e primo\n", n);
    else
        printf("%d nao e primo, menor divisor: %d\n", n, i);

    return 0;
}
