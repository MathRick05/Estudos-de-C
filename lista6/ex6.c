#include <stdio.h>
#include <math.h>

double calcularPotencia(double x, int n) {
  if (n == 0) {
    return 1;
  } else if (n > 0) {
    return x * calcularPotencia(x, n - 1);
  } else {
    return 1 / calcularPotencia(x, -n);
  }
}

int main() {
  double numero, potencia;

  printf("Digite um número real: ");
  scanf("%lf", &numero);

  printf("Digite a potência (inteiro): ");
  scanf("%d", &potencia);

  double resultadoPotencia = calcularPotencia(numero, potencia);

  printf("%.2lf elevado à potência %d é: %.2lf\n", numero, potencia, resultadoPotencia);

  return 0;
}
