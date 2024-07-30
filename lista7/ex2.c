#include <stdio.h>

int main() {
  // Declaração do vetor
  int vetor[5];

  // Entrada de dados do usuário
  for (int i = 0; i < 5; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  // Cálculo da soma
  int soma = 0;
  for (int i = 0; i < 5; i++) {
    soma += vetor[i];
  }

  // Apresentação da soma
  printf("Soma dos elementos do vetor: %d\n", soma);

  return 0;
}
