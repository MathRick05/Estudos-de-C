int main() {
  int n, m, i, j;

  printf("Digite a altura do retangulo: ");
  scanf("%d", &n);
  printf("Digite a largura do retangulo: ");
  scanf("%d", &m);

  i = 0;

  while (i < n) {
    j = 0;
    while (j < m) {
      printf("*");
      j++;
    }
    printf("\n");
    i++;
  }

  return 0;
}