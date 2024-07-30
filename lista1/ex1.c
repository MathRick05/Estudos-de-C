// 1. Faça um algoritmo que receba dois números e ao final mostre a soma, subtração,
// multiplicação e a divisão dos números lidos.

#include <stdio.h>

int main(void) {
    float num1;
    float num2;

    printf("Digite o primeiro numero:");
    scanf("%f", &num1);

    printf("Digite o segundo numero:");
    scanf("%f", &num2);

    float soma =  num1 + num2;
    float subtracao = num1 - num2;
    float  multiplicacao = num1 * num2;
    float divisao = num1 / num2;

    printf("Resultado: %.2f\n", soma);
    printf("Resultado: %.2f\n", subtracao);
    printf("Resultado: %.2f\n", multiplicacao);
    printf("Resultado: %.2f\n", divisao);

    return 0;
}
