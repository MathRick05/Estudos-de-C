#include <stdio.h>

int main() {
    int n, i = 1, j;

    // Ler o valor de n
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Loop para controlar as linhas
    while (i <= n) {
        // Loop para controlar as colunas
        j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
