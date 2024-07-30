#include <stdio.h>

int main() {
    int n, i = 1, impar = 1;

    // Ler o valor de n
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Loop para imprimir os n primeiros números ímpares
    while (i <= n) {
        // Imprimir o número ímpar atual
        printf("%d ", impar);

        // Incrementar o contador
        i++;

        // Calcular o próximo número ímpar
        impar += 2;
    }

    printf("\n");

    return 0;
}
