#include <stdio.h>

int main() {
  float pesoTerra, pesoPlaneta, gravidadeRelativa;
  int numeroPlaneta;

  printf("Digite seu peso na Terra (em kg): ");
  scanf("%f", &pesoTerra);

  printf("Digite o número do planeta (1-Mercúrio, 2-Vênus, 3-Marte, 4-Jupiter, 5-Saturno, 6-Urano): ");
  scanf("%d", &numeroPlaneta);

  if (numeroPlaneta < 1 || numeroPlaneta > 6) {
    printf("Número do planeta inválido!\n");
    return 1; // Sai do programa com erro
  }

  switch (numeroPlaneta) {
    case 1:
      gravidadeRelativa = 0.37f;
      break;
    case 2:
      gravidadeRelativa = 0.88f;
      break;
    case 3:
      gravidadeRelativa = 0.38f;
      break;
    case 4:
      gravidadeRelativa = 2.64f;
      break;
    case 5:
      gravidadeRelativa = 1.15f;
      break;
    case 6:
      gravidadeRelativa = 1.17f;
      break;
  }

  pesoPlaneta = pesoTerra * gravidadeRelativa;

  printf("Seu peso em %d (%s) seria de aproximadamente: %.2f kg\n", numeroPlaneta, obterNomePlaneta(numeroPlaneta));

  // Exibir a lista de planetas e seus pesos
  printf("\nLista de planetas e seus pesos aproximados:\n");
  for (int i = 1; i <= 6; i++) {
    switch (i) {
      case 1:
        gravidadeRelativa = 0.37f;
        break;
      case 2:
        gravidadeRelativa = 0.88f;
        break;
      case 3:
        gravidadeRelativa = 0.38f;
        break;
      case 4:
        gravidadeRelativa = 2.64f;
        break;
      case 5:
        gravidadeRelativa = 1.15f;
        break;
      case 6:
        gravidadeRelativa = 1.17f;
        break;
      default:
        gravidadeRelativa = 0.0f; // Valor padrão para planeta inválido
    }

    pesoPlaneta = pesoTerra * gravidadeRelativa;
    printf("%d - %s: %.2f kg\n", i, obterNomePlaneta(i), pesoPlaneta);
  }

  return 0;
}

// Função para obter o nome do planeta a partir do número
char* obterNomePlaneta(int numeroPlaneta) {
  switch (numeroPlaneta) {
    case 1:
      return "Mercúrio";
    case 2:
      return "Vênus";
    case 3:
      return "Marte";
    case 4:
      return "Júpiter";
    case 5:
      return "Saturno";
    case 6:
      return "Urano";
    default:
      return "Planeta inválido";
  }
}
