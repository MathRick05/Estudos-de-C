#include <stdio.h>

int main() {
    float valorCompra, lucro, valorVenda;

    // Solicita o valor do produto
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valorCompra);

    // Define o lucro
    if (valorCompra < 20.00) {
        lucro = 0.45;
    } else {
        lucro = 0.30;
    }

    // Calcula o valor da venda
    valorVenda = valorCompra * (1.0 + lucro);

    // Exibe o valor da venda
    printf("O valor da venda é de R$ %.2f\n", valorVenda);

    return 0;
}
