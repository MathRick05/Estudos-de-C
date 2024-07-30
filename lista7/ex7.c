#include <stdio.h>

int main() {
  // Declaração do vetor
  int vetor[10];
  int i;

  // Entrada de dados do vetor
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  // Variáveis para armazenar maior valor, menor valor e suas posições
  int maior = vetor[0], menor = vetor[0], posicaoMaior = 0, posicaoMenor = 0;

  // Percorrendo o vetor para encontrar o maior e menor elemento
  for (int i = 1; i < 10; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
      posicaoMaior = i;
    } else if (vetor[i] < menor) {
      menor = vetor[i];
      posicaoMenor = i;
    }
  }

  // Apresentação do maior e menor elemento e suas posições
  printf("\nMaior elemento: %d na posição %d", maior, posicaoMaior + 1);
  printf("\nMenor elemento: %d na posição %d", menor, posicaoMenor + 1);

  return 0;
}
