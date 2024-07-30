#include <stdio.h>

void verificarParImpar(int numero) {
  if (numero % 2 == 0) {
    printf("%d é um número par.\n", numero);
  } else {
    printf("%d é um número ímpar.\n", numero);
  }
}

int main() {
  int valor;

  printf("Digite um número: ");
  scanf("%d", &valor);

  verificarParImpar(valor);

  return 0;
}
