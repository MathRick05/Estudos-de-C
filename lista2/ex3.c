#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicita os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Ordena os números usando loops e variáveis temporárias
    int temp;
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Apresenta os números em ordem crescente
    printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
