#include <stdio.h>

int main() {
    char texto[100];
    int i, vogais = 0;

    printf("Digite uma frase: ");
    fgets(texto, 100, stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == 'a' || texto[i] == 'A' ||
            texto[i] == 'e' || texto[i] == 'E' ||
            texto[i] == 'i' || texto[i] == 'I' ||
            texto[i] == 'o' || texto[i] == 'O' ||
            texto[i] == 'u' || texto[i] == 'U') {
            vogais++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}
