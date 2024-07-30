#include <stdio.h>

int main() {
  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if (idade < 16) {
    printf("Com %d anos, você ainda não pode tirar o título de eleitor.\n", idade);
  } else if (idade == 16 || idade == 17) {
    printf("Com %d anos, o voto é facultativo. Você pode tirar o título de eleitor se desejar.\n", idade);
  } else if (idade >= 18 && idade <= 70) {
    printf("Com %d anos, o voto é obrigatório. Você precisa tirar o título de eleitor e votar.\n", idade);
  } else {
    printf("Com %d anos, o voto é facultativo. Você pode tirar o título de eleitor se desejar.\n", idade);
  }

  return 0;
}
