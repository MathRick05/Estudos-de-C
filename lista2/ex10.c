#include <stdio.h>

int main() {
  float salario, desconto;

  // Solicita o salário
  printf("Digite o seu salário: R$ ");
  scanf("%f", &salario);

  // Define o desconto
  if (salario <= 600.00) {
    desconto = 0.0;
  } else if (salario > 600.00 && salario <= 1200.00) {
    desconto = salario * 0.2;
  } else if (salario > 1200.00 && salario <= 2000.00) {
    desconto = salario * 0.25;
  } else {
    desconto = salario * 0.3;
  }

  // Exibe o desconto e o salário líquido
  printf("Desconto do INSS: R$ %.2f\n", desconto);
  printf("Salário líquido: R$ %.2f\n", salario - desconto);

  return 0;
}
