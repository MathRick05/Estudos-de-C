#include <stdio.h>

int main() {
  // Declaração do vetor
  int vetor[10], valorDigitado, posicao = 0;

  // Leitura dos 10 números (com verificação de repetição)
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número (diferente dos anteriores): ", i + 1);
    scanf("%d", &valorDigitado);

    // Verificando se o número já foi digitado
    int j = 0;
    while (j < posicao && vetor[j] != valorDigitado) {
      j++;
    }

    if (j == posicao) {  // Número não encontrado
      vetor[posicao] = valorDigitado;
      posicao++;
    } else {
      printf("Já digitado! Tente novamente.\n");
      i--;  // Decrementa o contador para reler o número
    }
  }

  // Impressão do vetor final
  printf("\nVetor final:\n");
  for (int i = 0; i < posicao; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}
