#include <stdio.h>

void converterMetros(double metros) {
  double decimetros = metros * 10;
  double centimetros = decimetros * 10;
  double milimetros = centimetros * 10;

  printf("%.2lf metros equivalem a:\n", metros);
  printf("%.2lf decímetros\n", decimetros);
  printf("%.2lf centímetros\n", centimetros);
  printf("%.2lf milímetros\n", milimetros);
}

int main() {
  double valorEmMetros;

  printf("Digite um valor em metros: ");
  scanf("%lf", &valorEmMetros);

  converterMetros(valorEmMetros);

  return 0;
}
