#ifndef PRODUTOS_H
#define PRODUTOS_H

#define MAX_PRODUTOS 5

typedef struct produtos {
    char nome[100];
    char tipo[50];
    float preco;
    int estoque;
} Produto;

extern Produto produtos[MAX_PRODUTOS];
extern int currentCount;

void waitForEnter();
void clear();
void saveProdutos();
void loadProdutos();
void createProduto();
void readProdutos();
void updateProduto();
void deleteProduto();
void buyProduto();

#endif // PRODUTOS_H
