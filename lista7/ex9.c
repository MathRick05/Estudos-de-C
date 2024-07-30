#include <stdio.h>

int main() {
  // Declaração do vetor
  float vetor[5];

  // Entrada de dados do vetor
  for (int i = 0; i < 5; i++) {
    printf("Digite o %dº número real: ", i + 1);
    scanf("%f", &vetor[i]);
  }

  // Leitura do código
  int codigo;
  printf("\nDigite o código (0, 1 ou 2): ");
  scanf("%d", &codigo);

  // Verificando o código e mostrando o vetor
  switch (codigo) {
    case 0:
      printf("\nPrograma finalizado.");
      break;
    case 1:
      printf("\nVetor na ordem direta:");
      for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetor[i]);  // Formata a saída com duas casas decimais
      }
      break;
    case 2:
      printf("\nVetor na ordem inversa:");
      for (int i = 4; i >= 0; i--) {
        printf("%.2f ", vetor[i]);  // Formata a saída com duas casas decimais
      }
      break;
    default:
      printf("\nCódigo inválido!");
  }

  return 0;
}
