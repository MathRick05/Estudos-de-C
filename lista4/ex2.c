#include <stdio.h>

int main() {
  int numeroLados;

  printf("Digite o número de lados da figura: ");
  scanf("%d", &numeroLados);

  switch (numeroLados) {
    case 3:
      printf("Triângulo\n");
      break;
    case 4:
      printf("Quadrado ou Retângulo (precisa de mais informações para diferenciar)\n");
      break;
    case 5:
      printf("Pentágono\n");
      break;
    case 6:
      printf("Hexágono\n");
      break;
    default:
      printf("Figura não identificada!\n");
  }

  return 0;
}
