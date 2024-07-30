#include <stdio.h>

int main() {
    int quantidade;
    float preco, custoTotal;

    // Solicita a quantidade de maçãs compradas
    printf("Digite a quantidade de maçãs compradas: ");
    scanf("%d", &quantidade);

    // Define o preço por maçã
    if (quantidade < 12) {
        preco = 1.30;
    } else {
        preco = 1.00;
    }

    // Calcula o custo total
    custoTotal = quantidade * preco;

    // Exibe o custo total
    printf("O custo total da compra é de R$ %.2f\n", custoTotal);

    return 0;
}
