#include <stdio.h>
#include <string.h> // Necessário para strcpy

int main() {
  int respostas[5];
  int numero_respostas_positivas = 0;

  // Perguntas e respostas (exemplo)
  char perguntas[][50] = {
    "Telefonou para a vítima?",
    "Esteve no local do crime?",
    "Mora perto da vítima?",
    "Devia para a vítima?",
    "Já trabalhou com a vítima?",
  };

  // Solicita as respostas do usuário
  for (int i = 0; i < 5; i++) {
    printf("%s (s/n): ", perguntas[i]);
    char resposta[3]; // Armazena a resposta do usuário (sim/não)
    scanf("%s", resposta);

    // Valida a resposta do usuário (sim/não)
    if (strcmp(resposta, "s") == 0 || strcmp(resposta, "S") == 0) {
      respostas[i] = 1; // Sim
    } else if (strcmp(resposta, "n") == 0 || strcmp(resposta, "N") == 0) {
      respostas[i] = 0; // Não
    } else {
      printf("Resposta inválida. Digite 's' para sim ou 'n' para não.\n");
      i--; // Decrementando i para repetir a pergunta
    }
  }

  // Conta o número de respostas positivas
  for (int i = 0; i < 5; i++) {
    if (respostas[i]) {
      numero_respostas_positivas++;
    }
  }

  // Classifica a participação
  char classificacao[20];
  switch (numero_respostas_positivas) {
    case 2:
      strcpy(classificacao, "Suspeita");
      break;
    case 3:
    case 4:
      strcpy(classificacao, "Cúmplice");
      break;
    case 5:
      strcpy(classificacao, "Assassino");
      break;
    default:
      strcpy(classificacao, "Inocente");
      break;
  }

  // Exibe a classificação da participação
  printf("Classificação da participação: %s\n", classificacao);

  return 0;
}
