#include <stdio.h>

void ordenarVetorCrescente(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = i + 1; j < tamanho; j++) {
      if (vetor[i] > vetor[j]) {
        int aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
}

int main() {
  // Declaração do vetor
  int vetor[10];

  // Leitura dos 10 números
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  // Ordenação do vetor
  ordenarVetorCrescente(vetor, 10);

  // Impressão do vetor ordenado
  printf("\nVetor ordenado:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
