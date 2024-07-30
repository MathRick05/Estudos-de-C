#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Create - vai pedir as infomações necessarias para criar os produtos
void createProduto() {
    clear();
    if (currentCount >= MAX_PRODUTOS) {
        printf("Lista de produtos cheia!\n");
        waitForEnter();
        return;
    }
    Produto novoProduto;
    printf("Digite o nome do produto: ");
    scanf("%s", novoProduto.nome);
    printf("Digite o tipo do produto: ");
    scanf("%s", novoProduto.tipo);
    printf("Digite o preço do produto: ");
    scanf("%f", &novoProduto.preco);
    printf("Digite a quantidade em estoque do produto: ");
    scanf("%d", &novoProduto.estoque);
    produtos[currentCount] = novoProduto;
    currentCount++;
    saveProdutos();
    printf("Produto criado com sucesso!\n");
    waitForEnter();
}
