#include <stdio.h>

int main() {
  char tipo_combustivel;
  float litros, valor_total, preco_por_litro;

  // Input de dados
  printf("Digite o tipo de combustível (E/G): ");
  scanf(" %c", &tipo_combustivel); // Space before %c avoids newline issues
  printf("Digite a quantidade de litros: ");
  scanf("%f", &litros);

  // Validação do tipo de combustível
  if (tipo_combustivel != 'E' && tipo_combustivel != 'G') {
    printf("Tipo de combustível inválido. Digite 'E' para etanol ou 'G' para gasolina.\n");
    return 1;
  }

  // Define o preço por litro de acordo com o tipo de combustível
  preco_por_litro = (tipo_combustivel == 'E') ? 2.90 : 4.40;

  // Cálculo do valor total sem desconto
  valor_total = litros * preco_por_litro;

  // Cálculo dos descontos (considerando apenas a lógica, sem diferenciação por faixa)
  float desconto_primeiros_20 = 0.0; // Substitua com a lógica de desconto para os primeiros 20 litros
  float desconto_acima_20 = 0.0; // Substitua com a lógica de desconto acima de 20 litros

  // Aplique a lógica de desconto aqui (substituindo os valores 0.0)
  if (litros > 20) {
    // Calcule o desconto para litros acima de 20 (desconto_acima_20)
    valor_total -= desconto_acima_20;
  }

  valor_total -= desconto_primeiros_20; // Desconto para os primeiros 20 litros (ajuste a lógica)

  // Saída de dados
  printf("Valor a pagar: R$ %.2f\n", valor_total);

  return 0;
}
