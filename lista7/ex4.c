#include <stdio.h>

int main() {
  // Declaração dos vetores
  int vetorA[5], vetorB[5], vetorSoma[5];

  // Entrada de dados para o vetor A
  for (int i = 0; i < 5; i++) {
    printf("Digite o %dº valor para o vetor A: ", i + 1);
    scanf("%d", &vetorA[i]);
  }

  // Entrada de dados para o vetor B
  for (int i = 0; i < 5; i++) {
    printf("Digite o %dº valor para o vetor B: ", i + 1);
    scanf("%d", &vetorB[i]);
  }

  // Cálculo da soma e armazenamento no vetorSoma
  for (int i = 0; i < 5; i++) {
    vetorSoma[i] = vetorA[i] + vetorB[i];
  }

  // Apresentação do vetorSoma
  printf("\nVetor Soma:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d ", vetorSoma[i]);
  }

  return 0;
}
