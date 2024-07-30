#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void buyProduto() {
    clear();
    if (currentCount == 0) {
        printf("Nenhum produto disponível para compra!\n");
        waitForEnter();
        return;
    }
    int id, quantidade, metodoPagamento;
    readProdutos();
    printf("Digite o ID do produto que deseja comprar (1 a %d): ", currentCount);
    scanf("%d", &id);
    if (id < 1 || id > currentCount) {
        printf("Produto não encontrado!\n");
        waitForEnter();
        return;
    }
    id--; // Ajusta para o índice do vetor
    printf("Digite a quantidade que deseja comprar: ");
    scanf("%d", &quantidade);
    if (quantidade > produtos[id].estoque) {
        printf("Quantidade indisponível em estoque!\n");
        waitForEnter();
        return;
    }
    printf("Escolha o método de pagamento:\n");
    printf("1. Cartão de Crédito\n");
    printf("2. Dinheiro\n");
    printf("Digite sua escolha: ");
    scanf("%d", &metodoPagamento);
    if (metodoPagamento < 1 || metodoPagamento > 2) {
        printf("Método de pagamento inválido!\n");
        waitForEnter();
        return;
    }
    produtos[id].estoque -= quantidade;
    saveProdutos();
    printf("Compra realizada com sucesso!\n");
    printf("Método de pagamento escolhido: %s\n", metodoPagamento == 1 ? "Cartão de Crédito" : "Dinheiro");
    waitForEnter();
}
