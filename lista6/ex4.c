#include <stdio.h>

int encontrarMaior(int num1, int num2) {
  if (num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}

int main() {
  int numero1, numero2, maior;

  printf("Digite dois números: ");
  scanf("%d %d", &numero1, &numero2);

  maior = encontrarMaior(numero1, numero2);

  printf("O maior número é: %d\n", maior);

  return 0;
}
