#include <stdio.h>
#include <string.h> // Incluir para usar a função strcasecmp

int main() {
  char destino[50];
  char tipoViagem[10];
  float precoTotal;

  printf("Digite o destino da viagem (Região Norte, Nordeste, Centro-Oeste ou Sul): ");
  scanf(" %[^\n]", destino); // Leitura completa da string do destino

  printf("Digite se a viagem é só de ida ou ida e volta (ida, volta): ");
  scanf(" %[^\n]", tipoViagem);

  // Converter o destino para maiúsculas para comparação sem case-sensitivity
  strlwr(destino, 50);

  // Converter o tipo de viagem para maiúsculas para comparação sem case-sensitivity
  strlwr(tipoViagem, 10);

  // Definir o preço total usando switch
  switch (strcmp(destino, "região norte")) {
    case 0:
      switch (strcmp(tipoViagem, "ida")) {
        case 0:
          precoTotal = 500.00f;
          break;
        case 1:
          precoTotal = 900.00f;
          break;
        default:
          printf("Tipo de viagem inválido!\n");
          return 1; // Sai do programa com erro
      }
      break;

    case -1: // Região Nordeste
      switch (strcmp(tipoViagem, "ida")) {
        case 0:
          precoTotal = 350.00f;
          break;
        case 1:
          precoTotal = 650.00f;
          break;
        default:
          printf("Tipo de viagem inválido!\n");
          return 1; // Sai do programa com erro
      }
      break;

    // ... (casos para Centro-Oeste e Sul)

    default:
      printf("Destino inválido!\n");
      return 1; // Sai do programa com erro
  }

  printf("O preço da passagem para %s (ida e volta: %s) é de R$ %.2f\n", destino, tipoViagem, precoTotal);

  return 0;
}
