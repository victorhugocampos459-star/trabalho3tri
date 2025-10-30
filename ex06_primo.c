#include <stdio.h>
#include <math.h>

int main() {
    int n, i, primo = 1;

    printf("Digite um numero maior ou igual a 2: ");
    scanf("%d", &n);

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo == 1)
        printf("%d e primo\n", n);
    else
        printf("%d nao e primo, menor divisor: %d\n", n, i);

    return 0;
}
