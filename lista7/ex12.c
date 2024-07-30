#include <stdio.h>

int main() {
  // Declaração dos vetores
  int vetorA[10], vetorB[10], vetorC[10];

  // Leitura dos vetores A e B
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número do vetor A: ", i + 1);
    scanf("%d", &vetorA[i]);

    printf("Digite o %dº número do vetor B: ", i + 1);
    scanf("%d", &vetorB[i]);
  }

  // Cálculo do vetor C
  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      vetorC[i] = vetorA[i];
    } else {
      vetorC[i] = vetorB[i];
    }
  }

  // Impressão do vetor C
  printf("\nVetor C:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d ", vetorC[i]);
  }

  return 0;
}
