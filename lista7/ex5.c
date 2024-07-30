#include <stdio.h>

int main() {
  // Declaração dos vetores
  int A[10], B[10], C[10];

  // Entrada de dados para os vetores A e B
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº valor para o vetor A: ", i + 1);
    scanf("%d", &A[i]);
    printf("Digite o %dº valor para o vetor B: ", i + 1);
    scanf("%d", &B[i]);
  }

  // Construção do vetor C
  for (int i = 0; i < 10; i++) {
    if (A[i] > B[i]) {
      C[i] = 1;
    } else if (A[i] == B[i]) {
      C[i] = 0;
    } else {
      C[i] = -1;
    }
  }

  // Apresentação do vetor C
  printf("\nVetor C:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d ", C[i]);
  }

  return 0;
}
