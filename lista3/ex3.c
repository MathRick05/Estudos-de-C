#include <stdio.h>

int main() {
  int numero, soma = 0;
  float media;

  // Loop para solicitar e somar 10 números
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &numero);
    soma += numero;
  }

  // Calcular a média
  media = (float)soma / 10;

  // Exibir a soma e a média
  printf("Soma dos números: %d\n", soma);
  printf("Média dos números: %.2f\n", media);

  return 0;
}