#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deleteProduto() {
    clear();
    int id;
    printf("Digite o ID do produto a ser deletado (1 a %d): ", currentCount);
    scanf("%d", &id);
    if (id < 1 || id > currentCount) {
        printf("Produto não encontrado!\n");
        waitForEnter();
        return;
    }
    id--; // Ajusta para o índice do vetor
    int i;  // Declarando a variável fora do loop
    for (i = id; i < currentCount - 1; i++) {
        produtos[i] = produtos[i + 1];
    }
    currentCount--;
    saveProdutos();
    printf("Produto deletado com sucesso!\n");
    waitForEnter();
}
