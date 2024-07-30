#include <stdio.h>
#include <math.h>

int main() {
    int numero;

    // Solicita o número ao usuário
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verifica se o número é par
    if (numero % 2 == 0) {
        // Se for par, apresenta a raiz quadrada
        printf("O número %d é par e sua raiz quadrada é %.2f\n", numero, sqrt(numero));
    } else {
        // Se for impar, apresenta a metade
        printf("O número %d é impar e sua metade é %d\n", numero, numero / 2);
    }

    return 0;
}
