#include <stdio.h>

int main() {
  int dia, mes, ano;

  // Solicita o dia, mês e ano do aniversário
  printf("Digite o dia do seu aniversário: ");
  scanf("%d", &dia);
  printf("Digite o mês do seu aniversário: ");
  scanf("%d", &mes);
  printf("Digite o ano do seu aniversário: ");
  scanf("%d", &ano);

  // Verifica se a data é válida
  int data_valida = 1;

  // Verifica o ano (assume-se que estamos em 2024)
  if (ano < 1900 || ano > 2024) {
    data_valida = 0;
    printf("Ano inválido. Deve estar entre 1900 e 2024.\n");
  }

  // Verifica o mês
  if (mes < 1 || mes > 12) {
    data_valida = 0;
    printf("Mês inválido. Deve estar entre 1 e 12.\n");
  } else {
    // Verifica o dia de acordo com o mês
    switch (mes) {
      case 4:
      case 6:
      case 9:
      case 11:
        if (dia > 30) {
          data_valida = 0;
          printf("Mês de %d dias. Dia inválido.\n", mes);
        }
        break;
      case 2:
        // Mês de fevereiro (considera-se apenas 28 dias, sem ano bissexto)
        if (dia > 28) {
          data_valida = 0;
          printf("Fevereiro com 28 dias. Dia inválido.\n");
        }
        break;
      default:
        // Outros meses com até 31 dias
        if (dia > 31) {
          data_valida = 0;
          printf("Mês de %d dias. Dia inválido.\n", mes <= 7 ? 31 : 30);
        }
        break;
    }
  }

  // Exibe a mensagem final
  if (data_valida) {
    printf("Data de nascimento válida.\n");
  }

  return 0;
}
