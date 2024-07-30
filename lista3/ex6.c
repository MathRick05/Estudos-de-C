#include <stdio.h>

int main() {
  float altura[10], somaMulheres = 0, somaHomens = 0;
  char sexo[10];
  int contMulheres = 0, contHomens = 0;
  int i = 0;

  // Leitura dos dados
  while (i < 10) {
    printf("Digite a altura da pessoa %d: ", i + 1);
    scanf("%f", &altura[i]);

    printf("Digite o sexo da pessoa %d (m/f): ", i + 1);
    scanf(" %c", &sexo[i]);

    // Contabilizar e somar alturas por sexo
    if (sexo[i] == 'f') {
      somaMulheres += altura[i];
      contMulheres++;
    } else if (sexo[i] == 'm') {
      somaHomens += altura[i];
      contHomens++;
    }

    i++;
  }

  // Calcular e mostrar as médias
  if (contMulheres > 0) {
    printf("Média de altura das mulheres: %.2f\n", somaMulheres / contMulheres);
  } else {
    printf("Não há mulheres no conjunto de dados.\n");
  }

  if (contHomens > 0) {
    printf("Média de altura dos homens: %.2f\n", somaHomens / contHomens);
  } else {
    printf("Não há homens no conjunto de dados.\n");
  }

  return 0;
}