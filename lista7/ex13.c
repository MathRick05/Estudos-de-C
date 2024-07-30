#include <stdio.h>

int main() {
  // Declaração do vetor
  int vetorN[20];

  // Leitura do vetor
  for (int i = 0; i < 20; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &vetorN[i]);
  }

  // Trocando elementos em posições pares-ímpares
  for (int i = 0; i < 10; i++) {
    int aux = vetorN[i];
    vetorN[i] = vetorN[19 - i];
    vetorN[19 - i] = aux;
  }

  // Impressão do vetor modificado
  printf("\nVetor modificado:\n");
  for (int i = 0; i < 20; i++) {
    printf("%d ", vetorN[i]);
  }

  return 0;
}
