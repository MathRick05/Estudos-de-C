#include <stdio.h>

int main() {
  int numero;

  // Loop para solicitar números
  while (1) {
    // Solicitar um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Parar se o número for negativo
    if (numero < 0) {
      break;
    }

    // Exibir o número digitado
    printf("Você digitou: %d\n", numero);
  }

  printf("Programa finalizado!\n");

  return 0;
}