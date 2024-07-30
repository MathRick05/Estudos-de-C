#include <stdio.h>

int main() {
  // Declaração do vetor
  float N[100];

  // Leitura do valor X
  printf("Digite o valor X: ");
  scanf("%f", &N[0]);

  // Calculando e armazenando metade em cada posição
  for (int i = 1; i < 100; i++) {
    N[i] = N[i - 1] / 2.0;  // Armazena metade do valor anterior
  }

  // Impressão do vetor
  printf("\nVetor N:\n");
  for (int i = 0; i < 100; i++) {
    printf("%.2f ", N[i]);  // Formata a saída com duas casas decimais
  }

  return 0;
}
