#include <stdio.h>

int main() {
  // Declaração dos vetores
  int vetorA[10], vetorB[10], produtoEscalar = 0;

  // Leitura dos vetores A e B
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número do vetor A: ", i + 1);
    scanf("%d", &vetorA[i]);

    printf("Digite o %dº número do vetor B: ", i + 1);
    scanf("%d", &vetorB[i]);
  }

  // Cálculo do produto escalar
  for (int i = 0; i < 10; i++) {
    produtoEscalar += vetorA[i] * vetorB[i];
  }

  // Impressão do produto escalar
  printf("\nProduto escalar (P): %d", produtoEscalar);

  return 0;
}
