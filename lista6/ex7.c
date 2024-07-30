#include <stdio.h>

// Função para imprimir as opções de pagamento e solicitar a opção desejada
int escolherOpcaoPagamento() {
  int opcao;

  printf("\nOpções de pagamento:\n");
  printf("a) À vista com 10%% de desconto\n");
  printf("b) Em duas vezes (preço da etiqueta)\n");
  printf("c) De 3 a 10 vezes com 3%% de juros ao mês (acima de R$ 100,00)\n");
  printf("Digite a opção desejada (letra): ");
  scanf(" %c", &opcao);

  return opcao;
}

// Função para calcular o valor com desconto à vista
double calcularDescontoVista(double valorTotal) {
  return valorTotal * 0.9;
}

// Função para calcular o valor em duas vezes
double calcularDuasVezes(double valorTotal) {
  return valorTotal;
}

// Função para calcular o valor com parcelas
double calcularParcelas(double valorTotal, int numeroParcelas, double taxaJuros) {
  double jurosMensal = taxaJuros / 100;
  double valorParcela = valorTotal * (jurosMensal * pow(1 + jurosMensal, numeroParcelas)) /
                       (pow(1 + jurosMensal, numeroParcelas) - 1);
  return valorParcela;
}

int main() {
  double valorTotal;

  printf("Digite o valor total da compra: R$ ");
  scanf("%lf", &valorTotal);

  int opcaoEscolhida = escolherOpcaoPagamento();

  switch (opcaoEscolhida) {
    case 'a':
      double valorDesconto = calcularDescontoVista(valorTotal);
      printf("\nValor à vista com 10%% de desconto: R$ %.2lf\n", valorDesconto);
      break;
    case 'b':
      double valorDuasVezes = calcularDuasVezes(valorTotal);
      printf("\nValor em duas vezes (sem juros): R$ %.2lf (R$ %.2lf por parcela)\n", valorDuasVezes, valorDuasVezes / 2);
      break;
    case 'c':
      if (valorTotal > 100) {
        int numeroParcelas;
        printf("\nDigite o número de parcelas (entre 3 e 10): ");
        scanf("%d", &numeroParcelas);

        if (numeroParcelas >= 3 && numeroParcelas <= 10) {
          double valorParcela = calcularParcelas(valorTotal, numeroParcelas, 3);
          printf("\nValor em %d vezes com 3%% de juros ao mês: R$ %.2lf (R$ %.2lf por parcela)\n", numeroParcelas, valorTotal, valorParcela);
        } else {
          printf("\nNúmero de parcelas inválido. Digite um valor entre 3 e 10.\n");
        }
      } else {
        printf("\nCompra não elegível para pagamento em parcelas. Valor total deve ser superior a R$ 100,00.\n");
      }
      break;
    default:
      printf("\nOpção inválida. Tente novamente.\n");
  }

  return 0;
}
