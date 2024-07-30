#include <stdio.h>
#include <math.h>

double calcularDelta(double a, double b, double c) {
  return b * b - 4 * a * c;
}

int main() {
  double a, b, c, delta;

  printf("Digite os coeficientes da equação do segundo grau (a, b, c): ");
  scanf("%lf %lf %lf", &a, &b, &c);

  delta = calcularDelta(a, b, c);

  printf("O valor do delta é: %.2lf\n", delta);

  return 0;
}
