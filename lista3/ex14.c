#include <stdio.h>

int main() {
    int numero, divisor = 1, soma = 0;

    // Ler o número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Loop para calcular a soma dos divisores
    while (divisor < numero) {
        // Verificar se o divisor divide o número
        if (numero % divisor == 0) {
            // Adicionar o divisor à soma
            soma += divisor;
        }
        // Incrementar o divisor
        divisor++;
    }

    // Imprimir a soma dos divisores
    printf("A soma dos divisores de %d é %d\n", numero, soma);

    return 0;
}
