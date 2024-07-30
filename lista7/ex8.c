#include <stdio.h>

int main() {
  // Declaração do vetor
  int vetor[10];

  // Entrada de dados do vetor
  for (int i = 0; i < 10; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  // Verificando valores iguais
  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (vetor[i] == vetor[j]) {
        printf("\nValores iguais encontrados: %d na posição %d e %d", vetor[i], i + 1, j + 1);
      }
    }
  }

  // Mensagem caso nenhum valor igual seja encontrado
  int flag = 0;  // Flag para indicar se algum valor igual foi encontrado
  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (vetor[i] == vetor[j]) {
        flag = 1;  // Indica que pelo menos um valor igual foi encontrado
        break;
      }
    }
  }
  if (flag == 0) {
    printf("\nNenhum valor igual foi encontrado.");
  }

  return 0;
}
