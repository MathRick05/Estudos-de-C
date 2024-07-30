#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void updateProduto() {
    clear();
    int id;
    printf("Digite o ID do produto a ser atualizado (1 a %d): ", currentCount);
    scanf("%d", &id);
    if (id < 1 || id > currentCount) {
        printf("Produto não encontrado!\n");
        waitForEnter();
        return;
    }
    id--; // Ajusta para o índice do vetor
    printf("Digite o novo nome do produto: ");
    scanf("%s", produtos[id].nome);
    printf("Digite o novo tipo do produto: ");
    scanf("%s", produtos[id].tipo);
    printf("Digite o novo preço do produto: ");
    scanf("%f", &produtos[id].preco);
    printf("Digite a nova quantidade em estoque do produto: ");
    scanf("%d", &produtos[id].estoque);
    saveProdutos();
    printf("Produto atualizado com sucesso!\n");
    waitForEnter();
}
