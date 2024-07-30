#include <stdio.h>

int main() {
  // Declaração do vetor
  int vetor[8];

  // Entrada de dados do usuário
  for (int i = 0; i < 8; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  // Apresentando os elementos na ordem inversa
  printf("\nElementos na ordem inversa:\n");
  for (int i = 7; i >= 0; i--) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
