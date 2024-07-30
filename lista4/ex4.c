#include <stdio.h>

int main() {
  int idade;
  float valorBase = 100.0f;
  float valorAdicional;
  float valorTotal;

  printf("Digite a idade do conveniado: ");
  scanf("%d", &idade);

  if (idade < 0) {
    printf("Idade inválida (deve ser maior ou igual a zero).\n");
    return 1; // Sai do programa com erro
  }

  switch (idade) {
    case 0 ... 9:
      valorAdicional = 80.0f;
      break;
    case 10 ... 29:
      valorAdicional = 50.0f;
      break;
    case 40 ... 59:
      valorAdicional = 95.0f;
      break;
    default:
      valorAdicional = 130.0f;
  }

  valorTotal = valorBase + valorAdicional;

  printf("O valor total a ser pago pelo plano de saúde é: R$ %.2f\n", valorTotal);

  return 0;
}
