#include <stdio.h>

int main() {
  float numero;

  printf("Digite um número: ");
  scanf("%f", &numero);

  if (numero > 0) {
    float triplo = numero * 3;
    printf("O número %.2f é positivo. O triplo dele é %.2f\n", numero, triplo);
  } else if (numero < 0) {
    float quadrado = numero * numero;
    printf("O número %.2f é negativo. O quadrado dele é %.2f\n", numero, quadrado);
  } else {
    printf("O número %.2f é zero.\n", numero);
  }

  return 0;
}
