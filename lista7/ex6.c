#include <stdio.h>

int main() {
  // Declaração do vetor
  int vetor[8];

  // Entrada de dados do vetor
  for (int i = 0; i < 8; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  // Leitura das posições X e Y
  int x, y;
  printf("\nDigite a posição X: ");
  scanf("%d", &x);
  printf("Digite a posição Y: ");
  scanf("%d", &y);

  // Verificando se as posições são válidas
  if (x >= 1 && x <= 8 && y >= 1 && y <= 8) {
    // Ajustando para índice zero
    x--;
    y--;

    // Soma dos valores nas posições X e Y
    int soma = vetor[x] + vetor[y];
    printf("\nSoma dos valores nas posições %d e %d: %d", x + 1, y + 1, soma);
  } else {
    printf("\nPosições inválidas!");
  }

  return 0;
}
