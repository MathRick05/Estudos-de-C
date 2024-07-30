#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readProdutos() {
    clear();
    if (currentCount == 0) {
        printf("Nenhum produto para exibir!\n");
        waitForEnter();
        return;
    }
    int i;
    for (i = 0; i < currentCount; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Tipo: %s\n", produtos[i].tipo);
        printf("Preço: %.2f\n", produtos[i].preco);
        printf("Estoque: %d\n", produtos[i].estoque);
        printf("\n");
    }
    waitForEnter();
}
