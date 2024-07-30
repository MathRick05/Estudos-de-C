#include <stdio.h>

int main() {
  float altura, peso_ideal;
  char genero;

  // Solicita a altura e o gênero do usuário
  printf("Digite sua altura (em metros): ");
  scanf("%f", &altura);
  printf("Digite seu gênero (M/F): ");
  scanf(" %c", &genero); // Space before %c avoids potential newline issues

  // Valida o gênero (M ou F)
  if (genero != 'M' && genero != 'F') {
    printf("Gênero inválido. Digite 'M' para masculino ou 'F' para feminino.\n");
    return 1;
  }

  // Calcula o peso ideal de acordo com o gênero
  switch (genero) {
    case 'M':
      peso_ideal = (72.7 * altura) - 58;
      break;
    case 'F':
      peso_ideal = (62.1 * altura) - 44.7;
      break;
  }

  // Exibe o peso ideal
  printf("Peso ideal: %.2f kg\n", peso_ideal);

  return 0;
}
