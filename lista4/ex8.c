#include <stdio.h>

typedef struct ContaCorrente {
  int numeroConta;
  char nomeTitular[50];
  float saldo;
} ContaCorrente;

int main() {
  ContaCorrente conta;

  // Cadastrar a conta
  printf("Digite o número da conta: ");
  scanf("%d", &conta.numeroConta);

  printf("Digite o nome do titular: ");
  scanf("%s[^\n]", conta.nomeTitular); // Leitura completa do nome

  conta.saldo = 0.0f; // Saldo inicial zero

  int opcao;
  float valor;

  do {
    printf("\nMenu de Operações:\n");
    printf("1. Consultar Saldo\n");
    printf("2. Depositar\n");
    printf("3. Sacar\n");
    printf("4. Sair\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1: // Consultar Saldo
        printf("\nSaldo da Conta %d: R$ %.2f\n", conta.numeroConta, conta.saldo);
        break;

      case 2: // Depositar
        printf("\nDigite o valor a depositar: R$ ");
        scanf("%f", &valor);

        if (valor <= 0) {
          printf("Valor inválido!\n");
        } else {
          conta.saldo += valor;
          printf("Depósito realizado com sucesso! Novo saldo: R$ %.2f\n", conta.saldo);
        }
        break;

      case 3: // Sacar
        printf("\nDigite o valor a sacar: R$ ");
        scanf("%f", &valor);

        if (valor <= 0) {
          printf("Valor inválido!\n");
        } else if (valor > conta.saldo) {
          printf("Saldo insuficiente para saque!\n");
        } else {
          conta.saldo -= valor;
          printf("Saque realizado com sucesso! Novo saldo: R$ %.2f\n", conta.saldo);
        }
        break;

      case 4: // Sair
        printf("\nSaindo do sistema...\n");
        break;

      default:
        printf("Opção inválida!\n");
    }
  } while (opcao != 4); // Loop continua enquanto a opção for diferente de 4 (sair)

  return 0;
}
