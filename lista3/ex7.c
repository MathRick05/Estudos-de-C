#include <stdio.h>

int main() {
  int soma = 0, numero = 1;

  // Loop para iterar de 1 a 500
  while (numero <= 500) {
    // Verificar se o número é ímpar e múltiplo de 3
    if (numero % 2 != 0 && numero % 3 == 0) {
      soma += numero;
    }

    // Incrementar o número
    numero++;
  }

  // Exibir a soma
  printf("A soma dos números ímpares e múltiplos de 3 entre 1 e 500 é: %d\n", soma);

  return 0;
}