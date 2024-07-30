#include <stdio.h>

int main() {
    int numero = 1, multiplo = 1;

    // Loop para determinar os cinco primeiros múltiplos de 3
    while (multiplo <= 5) {
        // Verificar se o número é múltiplo de 3
        if (numero % 3 == 0) {
            printf("%d ", numero);
            multiplo++;
        }
        numero++;
    }

    printf("\n");

    return 0;
}
