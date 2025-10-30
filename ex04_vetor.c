#include <stdio.h>

int main() {
    int vet[10];
    int i, soma = 0, maior, menor;
    float media;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
        soma = soma + vet[i];
    }

    maior = vet[0];
    menor = vet[0];

    for (i = 1; i < 10; i++) {
        if (vet[i] > maior)
            maior = vet[i];
        if (vet[i] < menor)
            menor = vet[i];
    }

    media = (float)soma / 10;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}
