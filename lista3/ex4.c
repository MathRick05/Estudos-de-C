#include <stdio.h>
#include <limits.h>

int main() {
  int numero, maior = INT_MIN, contador = 0;

  // Loop while para ler 10 números
  while (contador < 10) {
    printf("Digite o %dº número: ", contador + 1);
    scanf("%d", &numero);

    // Atualizar o maior valor se necessário
    if (numero > maior) {
      maior = numero;
    }

    contador++;
  }

  // Exibir o maior valor
  printf("O maior valor digitado é: %d\n", maior);

  return 0;
}