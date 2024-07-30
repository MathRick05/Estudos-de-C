#include <stdio.h>

int main() {
  float horas_trabalhadas, salario_hora, salario_total, horas_extras, valor_hora_extra, valor_horas_extras;

  // Input de dados
  printf("Digite o número de horas trabalhadas no mês: ");
  scanf("%f", &horas_trabalhadas);
  printf("Digite o salário por hora: R$ ");
  scanf("%f", &salario_hora);

  // Cálculo do número de horas extras
  horas_extras = horas_trabalhadas > 160 ? horas_trabalhadas - 160 : 0;

  // Cálculo do valor da hora extra (50% acréscimo)
  valor_hora_extra = salario_hora * 1.5;

  // Cálculo do valor das horas extras
  valor_horas_extras = horas_extras * valor_hora_extra;

  // Cálculo do salário total
  salario_total = (horas_trabalhadas - horas_extras) * salario_hora + valor_horas_extras;

  // Saída de dados
  printf("Salário total (considerando horas extras): R$ %.2f\n", salario_total);

  return 0;
}
