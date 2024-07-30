#include <stdio.h>

int main() {
  float distanciaKm;
  char tipoCarro;
  float consumoEstimado;

  printf("Digite o percurso em quilômetros: ");
  scanf("%f", &distanciaKm);

  printf("Digite o tipo do carro (A, B ou C): ");
  scanf(" %c", &tipoCarro); // Espaço antes de %c para evitar leitura do \n

  switch (tipoCarro) {
    case 'A':
    case 'a':
      consumoEstimado = distanciaKm / 12.0f;
      break;
    case 'B':
    case 'b':
      consumoEstimado = distanciaKm / 9.0f;
      break;
    case 'C':
    case 'c':
      consumoEstimado = distanciaKm / 8.0f;
      break;
    default:
      printf("Tipo de carro inválido!\n");
      return 1; // Sai do programa com erro
  }

  printf("O consumo estimado de combustível é de: %.2f litros\n", consumoEstimado);

  return 0;
}
