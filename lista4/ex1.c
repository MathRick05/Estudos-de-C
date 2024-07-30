#include <stdio.h>

int main() {
  float num1, num2, resultado;
  char operacao;

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);

  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  printf("Digite a operação (+, -, *, /): ");
  scanf(" %c", &operacao); // Espaço antes de %c para evitar leitura do \n

  switch (operacao) {
    case '+':
      resultado = num1 + num2;
      break;
    case '-':
      resultado = num1 - num2;
      break;
    case '*':
      resultado = num1 * num2;
      break;
    case '/':
      if (num2 == 0) {
        printf("Erro: Divisão por zero!\n");
        return 1; // Sai do programa com erro
      }
      resultado = num1 / num2;
      break;
    default:
      printf("Operação inválida!\n");
      return 1; // Sai do programa com erro
  }

  printf("O resultado da operação é: %.2f\n", resultado);

  return 0;
}
