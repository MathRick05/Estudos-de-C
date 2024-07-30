#include <stdio.h>

int main() {
  // Declaração dos vetores
  int vetorOriginal[10], vetorImpares[10];
  int countImpares = 0;  // Contador de números ímpares

  // Leitura e armazenamento no vetor original
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número (entre 0 e 50): ", i + 1);
    scanf("%d", &vetorOriginal[i]);

    // Verificando se o número é ímpar
    if (vetorOriginal[i] % 2 != 0) {
      // Armazenando no vetor de ímpares
      vetorImpares[countImpares] = vetorOriginal[i];
      countImpares++;  // Incrementando o contador
    }
  }

  // Impressão do vetor original
  printf("\nVetor original:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d ", vetorOriginal[i]);
  }

  // Impressão do vetor de ímpares
  printf("\n\nVetor de ímpares:\n");
  for (int i = 0; i < countImpares; i++) {
    printf("%d ", vetorImpares[i]);
  }

  return 0;
}
