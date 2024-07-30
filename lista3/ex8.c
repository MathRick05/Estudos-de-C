#include <stdio.h>

int main() {
  int numero, somaPositivos = 0, quantidadeNegativos = 0;

  // Leitura do primeiro número
  printf("Digite um número (0 para parar): ");
  scanf("%d", &numero);

  // Loop para ler os números subsequentes
  while (numero != 0) {
    if (numero > 0) {
      somaPositivos += numero;
    } else {
      quantidadeNegativos++;
    }

    // Leitura do próximo número
    printf("Digite um número (0 para parar): ");
    scanf("%d", &numero);
  }

  // Exibir resultados
  printf("Soma dos números positivos: %d\n", somaPositivos);
  printf("Quantidade de números negativos: %d\n", quantidadeNegativos);

  return 0;
}