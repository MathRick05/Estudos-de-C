#include <stdio.h>

double calcularMedia(double nota1, double nota2, double nota3, char letra) {
  if (letra == 'A' || letra == 'a') {
    // Média aritmética
    return (nota1 + nota2 + nota3) / 3;
  } else if (letra == 'P' || letra == 'p') {
    // Média ponderada (pesos: 5, 3, 2)
    return (5 * nota1 + 3 * nota2 + 2 * nota3) / 10;
  } else {
    printf("Letra inválida. Digite 'A' para média aritmética ou 'P' para média ponderada.\n");
    return 0; // Retorna 0 em caso de letra inválida
  }
}

int main() {
  double nota1, nota2, nota3;
  char letra;

  printf("Digite as 3 notas do aluno: ");
  scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

  printf("Digite a letra que indica o tipo de média (A/P): ");
  scanf(" %c", &letra);

  double media = calcularMedia(nota1, nota2, nota3, letra);

  printf("A média do aluno é: %.2lf\n", media);

  return 0;
}
