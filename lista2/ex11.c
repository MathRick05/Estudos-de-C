#include <stdio.h>

int main() {
  char nome_municipio[50];
  int eleitores_aptos, votos_candidato_mais_votado;

  // Solicita dados do usuário
  printf("Digite o nome do município: ");
  fgets(nome_municipio, sizeof(nome_municipio), stdin);
  printf("Digite a quantidade de eleitores aptos: ");
  scanf("%d", &eleitores_aptos);
  printf("Digite o número de votos do candidato mais votado: ");
  scanf("%d", &votos_candidato_mais_votado);

  // Remove o \n do final do nome do município lido com fgets
  nome_municipio[strcspn(nome_municipio, "\n")] = '\0';

  // Verifica se haverá segundo turno
  if (eleitores_aptos > 20000) {
    float porcentagem_votos = (float)votos_candidato_mais_votado / eleitores_aptos * 100;
    if (porcentagem_votos <= 50.0) {
      printf("Haverá segundo turno em %s.\n", nome_municipio);
    } else {
      printf("Não haverá segundo turno em %s.\n", nome_municipio);
    }
  } else {
    printf("O município de %s não tem eleitores suficientes para segundo turno.\n", nome_municipio);
  }

  return 0;
}
