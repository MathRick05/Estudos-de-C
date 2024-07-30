#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declaração dos vetores
  int vetorA[10], vetorB[10], interseccao[10], countInterseccao = 0;

  // Leitura dos vetores A e B
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número do vetor A: ", i + 1);
    scanf("%d", &vetorA[i]);

    printf("Digite o %dº número do vetor B: ", i + 1);
    scanf("%d", &vetorB[i]);
  }

  // Verificando intersecção e armazenando em vetorC
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (vetorA[i] == vetorB[j] && !jaExiste(interseccao, countInterseccao, vetorA[i])) {
        interseccao[countInterseccao] = vetorA[i];
        countInterseccao++;
      }
    }
  }

  // Impressão do vetor intersecção
  printf("\nVetor intersecção:\n");
  if (countInterseccao == 0) {
    printf("Não há elementos em comum.\n");
  } else {
    for (int i = 0; i < countInterseccao; i++) {
      printf("%d ", interseccao[i]);
    }
  }

  return 0;
}

// Função para verificar se um elemento já existe no vetor (para evitar repetições)
int jaExiste(int vetor[], int tamanho, int elemento) {
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] == elemento) {
      return 1;
    }
  }
  return 0;
}
