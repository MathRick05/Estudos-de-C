#include <stdio.h>
#include <math.h> // Biblioteca para funções matemáticas

int main() {
  int a, b, c;
  float delta;

  // Leitura dos coeficientes da equação
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  printf("Digite o valor de C: ");
  scanf("%d", &c);

  // Verificação se A é diferente de zero (condição para ser equação de segundo grau)
  if (a == 0) {
    printf("Não é equação de segundo grau.\n");
    return 1;
  }

  // Cálculo do delta
  delta = b * b - 4 * a * c;

  // Verificação do valor de delta
  if (delta < 0) {
    printf("Não há raízes reais.\n");
  } else {
    printf("O valor de Delta é %.2f\n", delta);

    // Cálculo e exibição das raízes (se delta positivo ou zero)
    float x1, x2;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("Raiz 1: %.2f\n", x1);
    printf("Raiz 2: %.2f\n", x2);
  }

  return 0;
}
