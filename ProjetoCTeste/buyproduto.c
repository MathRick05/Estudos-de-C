#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void buyProduto() {
    clear();
    if (currentCount == 0) {
        printf("Nenhum produto dispon�vel para compra!\n");
        waitForEnter();
        return;
    }
    int id, quantidade, metodoPagamento;
    readProdutos();
    printf("Digite o ID do produto que deseja comprar (1 a %d): ", currentCount);
    scanf("%d", &id);
    if (id < 1 || id > currentCount) {
        printf("Produto n�o encontrado!\n");
        waitForEnter();
        return;
    }
    id--; // Ajusta para o �ndice do vetor
    printf("Digite a quantidade que deseja comprar: ");
    scanf("%d", &quantidade);
    if (quantidade > produtos[id].estoque) {
        printf("Quantidade indispon�vel em estoque!\n");
        waitForEnter();
        return;
    }
    printf("Escolha o m�todo de pagamento:\n");
    printf("1. Cart�o de Cr�dito\n");
    printf("2. Dinheiro\n");
    printf("Digite sua escolha: ");
    scanf("%d", &metodoPagamento);
    if (metodoPagamento < 1 || metodoPagamento > 2) {
        printf("M�todo de pagamento inv�lido!\n");
        waitForEnter();
        return;
    }
    produtos[id].estoque -= quantidade;
    saveProdutos();
    printf("Compra realizada com sucesso!\n");
    printf("M�todo de pagamento escolhido: %s\n", metodoPagamento == 1 ? "Cart�o de Cr�dito" : "Dinheiro");
    waitForEnter();
}
