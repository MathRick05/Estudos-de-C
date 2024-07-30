#include <stdio.h>

int main() {
    int numero, divisor = 2, ehPrimo = 1;

    // Ler o número
    printf("Digite um número inteiro maior que 1: ");
    scanf("%d", &numero);

    // Verificar se o número é divisível por qualquer número entre 2 e a raiz quadrada do número
    while (divisor * divisor <= numero && ehPrimo) {
        if (numero % divisor == 0) {
            ehPrimo = 0; // Se o número for divisível por outro número, não é primo
        }
        divisor++;
    }

    // Imprimir o resultado
    if (ehPrimo) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
