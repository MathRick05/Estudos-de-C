#include <stdio.h>

int main() {
  float salario, valor_aumento, salario_novo;
  int faixa_salarial;

  // Solicita o salário do colaborador
  printf("Digite o salário do colaborador: R$ ");
  scanf("%f", &salario);

  // Define as faixas salariais e os percentuais de aumento
  float faixas_salariais[][2] = {
    {0.0, 0.2},   // Até R$ 280, aumento de 20%
    {280.0, 0.15}, // De R$ 280,01 até R$ 700, aumento de 15%
    {700.0, 0.1},  // De R$ 700,01 até R$ 1500, aumento de 10%
    {1500.0, 0.05}, // Acima de R$ 1500, aumento de 5%
  };

  // Encontra a faixa salarial do colaborador
  faixa_salarial = 0;
  while (faixa_salarial < sizeof(faixas_salariais) / sizeof(faixas_salariais[0]) && salario > faixas_salariais[faixa_salarial][0]) {
    faixa_salarial++;
  }

  // Verifica se a faixa salarial encontrada é válida
  if (faixa_salarial >= sizeof(faixas_salariais) / sizeof(faixas_salariais[0])) {
    printf("Faixa salarial inválida.\n");
    return 1;
  }

  // Calcula o valor do aumento e o novo salário
  valor_aumento = salario * faixas_salariais[faixa_salarial][1];
  salario_novo = salario + valor_aumento;

  // Exibe as informações do reajuste
  printf("Salário antes do reajuste: R$ %.2f\n", salario);
  printf("Percentual de aumento aplicado: %.2f%%\n", faixas_salariais[faixa_salarial][1] * 100);
  printf("Valor do aumento: R$ %.2f\n", valor_aumento);
  printf("Salário novo: R$ %.2f\n", salario_novo);

  return 0;
}
