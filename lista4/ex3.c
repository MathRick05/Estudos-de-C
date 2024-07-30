#include <stdio.h>

#define PI 3.14159265 // Valor do pi

int main() {
  char opcao;

  do {
    printf("\n\nMenu de Cálculo de Áreas:\n");
    printf("C - Círculo\n");
    printf("R - Retângulo\n");
    printf("Q - Quadrado\n");
    printf("S - Sair\n");
    printf("Digite sua opção: ");
    scanf(" %c", &opcao); // Espaço antes de %c para evitar leitura do \n

    switch (opcao) {
      case 'C':
      case 'c':
        float raio;
        printf("Digite o raio do círculo: ");
        scanf("%f", &raio);

        if (raio <= 0) {
          printf("Erro: Raio inválido (deve ser maior que zero).\n");
          break;
        }

        float areaCirculo = PI * raio * raio;
        printf("A área do círculo é: %.2f\n", areaCirculo);
        break;

      case 'R':
      case 'r':
        float base, altura;
        printf("Digite a base do retângulo: ");
        scanf("%f", &base);
        printf("Digite a altura do retângulo: ");
        scanf("%f", &altura);

        if (base <= 0 || altura <= 0) {
          printf("Erro: Dimensões inválidas (devem ser maiores que zero).\n");
          break;
        }

        float areaRetangulo = base * altura;
        printf("A área do retângulo é: %.2f\n", areaRetangulo);
        break;

      case 'Q':
      case 'q':
        float lado;
        printf("Digite o lado do quadrado: ");
        scanf("%f", &lado);

        if (lado <= 0) {
          printf("Erro: Lado inválido (deve ser maior que zero).\n");
          break;
        }

        float areaQuadrado = lado * lado;
        printf("A área do quadrado é: %.2f\n", areaQuadrado);
        break;

      case 'S':
      case 's':
        printf("Saindo do programa...\n");
        break;

      default:
        printf("Opção inválida!\n");
    }
  } while (opcao != 'S' && opcao != 's');

  return 0;
}
