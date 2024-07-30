#include <stdio.h>

int main() {
  float valor_reais, valor_convertido;
  char moeda;

  // Cotações de moedas (substitua por valores atualizados)
  float cotacao_franco_suico = 5.41;
  float cotacao_libra_esterlina = 6.45;
  float cotacao_dolar = 5.15;
  float cotacao_marco_alemao = 3.22;

  // Entrada de dados
  printf("Digite o valor em reais: R$ ");
  scanf("%f", &valor_reais);
  printf("Digite a moeda desejada (F/L/D/M): ");
  scanf(" %c", &moeda); // Space before %c avoids newline issues

  // Validação da moeda
  if (moeda != 'F' && moeda != 'L' && moeda != 'D' && moeda != 'M') {
    printf("Moeda inválida. Digite F para franco suíço, L para libra esterlina, D para dólar ou M para marco alemão.\n");
    return 1;
  }

  // Conversão de acordo com a moeda escolhida
  switch (moeda) {
    case 'F':
      valor_convertido = valor_reais / cotacao_franco_suico;
      printf("Valor em franco suíço: CHF %.2f\n", valor_convertido);
      break;
    case 'L':
      valor_convertido = valor_reais / cotacao_libra_esterlina;
      printf("Valor em libra esterlina: £ %.2f\n", valor_convertido);
      break;
    case 'D':
      valor_convertido = valor_reais / cotacao_dolar;
      printf("Valor em dólar: US$ %.2f\n", valor_convertido);
      break;
    case 'M':
      valor_convertido = valor_reais / cotacao_marco_alemao;
      printf("Valor em marco alemão: DM %.2f\n", valor_convertido);
      break;
  }

  return 0;
}
