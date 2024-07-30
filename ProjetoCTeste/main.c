#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Produto produtos[MAX_PRODUTOS];
int currentCount = 0;

void waitForEnter() {
    printf("Pressione Enter para continuar...");
    getchar();
    getchar();
}

void clear() {
    system("cls");
}

void saveProdutos() {
    int i;
    FILE *file = fopen("produtos.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir arquivo para escrita.\n");
        return;
    }
    fprintf(file, "%d\n", currentCount);
    for (i = 0; i < currentCount; i++) {
        fprintf(file, "%s\n%s\n%.2f\n%d\n", produtos[i].nome, produtos[i].tipo, produtos[i].preco, produtos[i].estoque);
    }
    fclose(file);
}

void loadProdutos() {
    int i;
    FILE *file = fopen("produtos.txt", "r");
    if (file == NULL) {
        // Arquivo não existe, iniciar com lista vazia
        currentCount = 0;
        return;
    }
    fscanf(file, "%d\n", &currentCount);
    for (i = 0; i < currentCount; i++) {
        fscanf(file, "%99[^\n]\n", produtos[i].nome);
        fscanf(file, "%49[^\n]\n", produtos[i].tipo);
        fscanf(file, "%f\n", &produtos[i].preco);
        fscanf(file, "%d\n", &produtos[i].estoque);
    }
    fclose(file);
}

int main() {
    loadProdutos();
    int choice;
    while (1) {
        clear();
        printf("\nMenu:\n");
        printf("1. Criar Produto\n");
        printf("2. Listar Produtos\n");
        printf("3. Atualizar Produto\n");
        printf("4. Deletar Produto\n");
        printf("5. Comprar Produto\n");
        printf("6. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createProduto();
                break;
            case 2:
                readProdutos();
                break;
            case 3:
                updateProduto();
                break;
            case 4:
                deleteProduto();
                break;
            case 5:
                buyProduto();
                break;
            case 6:
                saveProdutos();
                return 0;
            default:
                printf("Escolha inválida! Por favor, tente novamente.\n");
                waitForEnter();
        }
    }
    return 0;
}
