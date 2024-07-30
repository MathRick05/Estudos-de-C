#include <stdio.h>

int main() {
  int numero, contador = 1, resultado;

  // Solicitar o número
  printf("Digite um número: ");
  scanf("%d", &numero);

  // Exibir a tabuada
  printf("Tabuada do %d:\n", numero);

  // Loop while para exibir a tabuada
  while (contador <= 10) {
    resultado = numero * contador;
    printf("%d x %d = %d\n", numero, contador, resultado);
    contador++;
  }

  return 0;
}