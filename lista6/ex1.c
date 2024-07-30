#include <stdio.h>

void verificarPositivo(int numero) {
  if (numero > 0) {
    printf("%d é um número positivo.\n", numero);
  } else if (numero == 0) {
    printf("%d é zero.\n", numero);
  } else {
    printf("%d é um número negativo.\n", numero);
  }
}

int main() {
  int valor;

  printf("Digite um número: ");
  scanf("%d", &valor);

  verificarPositivo(valor);

  return 0;
}
