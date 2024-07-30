#include <stdio.h>

int main() {
  // Declaração e inicialização do vetor A
  int A[6] = {1, 0, 5, -2, -5, 7};

  // Soma dos valores nas posições A[0], A[1] e A[5]
  int soma = A[0] + A[1] + A[5];

  // Impressão da soma
  printf("Soma dos elementos A[0], A[1] e A[5]: %d\n", soma);

  // Modificando o valor na posição A[4]
  A[4] = 100;

  // Impressão de cada valor do vetor A
  for (int i = 0; i < 6; i++) {
    printf("A[%d] = %d\n", i, A[i]);
  }

  return 0;
}
