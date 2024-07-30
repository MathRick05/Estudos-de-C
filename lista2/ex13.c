#include <stdio.h>

int main() {
  float salario_bruto, valor_prestacao;

  // Solicita o salário bruto e o valor da prestação
  printf("Digite o salário bruto: R$ ");
  scanf("%f", &salario_bruto);
  printf("Digite o valor da prestação: R$ ");
  scanf("%f", &valor_prestacao);

  // Calcula o valor máximo da prestação
  float valor_maximo_prestacao = salario_bruto * 0.3;

  // Verifica se o valor da prestação é menor ou igual ao valor máximo
  if (valor_prestacao <= valor_maximo_prestacao) {
    printf("Empréstimo pode ser concedido.\n");
  } else {
    printf("Empréstimo não pode ser concedido.\n");
  }

  return 0;
}
