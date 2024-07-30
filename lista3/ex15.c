#include <stdio.h>

int main() {
    int valorSaque, notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, notas1 = 0;

    // Ler o valor do saque
    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valorSaque);

    // Processar notas de 100
    while (valorSaque >= 100) {
        valorSaque -= 100;
        notas100++;
    }

    // Processar notas de 50
    while (valorSaque >= 50) {
        valorSaque -= 50;
        notas50++;
    }

    // Processar notas de 20
    while (valorSaque >= 20) {
        valorSaque -= 20;
        notas20++;
    }

    // Processar notas de 10
    while (valorSaque >= 10) {
        valorSaque -= 10;
        notas10++;
    }

    // Processar notas de 5
    while (valorSaque >= 5) {
        valorSaque -= 5;
        notas5++;
    }

    // Processar notas de 2
    while (valorSaque >= 2) {
        valorSaque -= 2;
        notas2++;
    }

    // Processar notas de 1
    while (valorSaque >= 1) {
        valorSaque -= 1;
        notas1++;
    }

    // Imprimir o resultado
    printf("Notas de R$100: %d\n", notas100);
    printf("Notas de R$50: %d\n", notas50);
    printf("Notas de R$20: %d\n", notas20);
    printf("Notas de R$10: %d\n", notas10);
    printf("Notas de R$5: %d\n", notas5);
    printf("Notas de R$2: %d\n", notas2);
    printf("Notas de R$1: %d\n", notas1);

    return 0;
}
