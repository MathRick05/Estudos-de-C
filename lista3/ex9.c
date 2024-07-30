#include <stdio.h>

int main() {
  float rendaMensal;
  char opcao;

  do {
    // Leitura da renda mensal
    printf("Digite sua renda mensal: R$ ");
    scanf("%f", &rendaMensal);

    // Cálculo do imposto
    float imposto = 0;
    if (rendaMensal <= 1637.11) {
      imposto = 0;
    } else if (rendaMensal <= 2453.50) {
      imposto = (rendaMensal - 1637.11) * 0.075;
    } else if (rendaMensal <= 3271.38) {
      imposto = (2453.50 - 1637.11) * 0.075 + (rendaMensal - 2453.50) * 0.15;
    } else if (rendaMensal <= 4087.65) {
      imposto = (2453.50 - 1637.11) * 0.075 + (3271.38 - 2453.50) * 0.15 + (rendaMensal - 3271.38) * 0.225;
    } else {
      imposto = (2453.50 - 1637.11) * 0.075 + (3271.38 - 2453.50) * 0.15 + (4087.65 - 3271.38) * 0.225 + (rendaMensal - 4087.65) * 0.275;
    }

    // Exibir resultados
    printf("Imposto a pagar: R$ %.2f\n", imposto);

    // Perguntar se deseja continuar
    printf("Deseja realizar outra consulta? (S/N): ");
    scanf(" %c", &opcao);
  } while (opcao == 'S' || opcao == 's');

  return 0;
}