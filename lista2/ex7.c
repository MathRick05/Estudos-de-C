#include <stdio.h>
#include <string.h>

int main() {
    char genero[10], nome[50];
    int idade;

    // Solicita o nome, gênero e idade da pessoa
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu gênero (M/F): ");
    scanf("%s", genero);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Verifica se a pessoa é do gênero feminino e menor de 25 anos
    if (strcmp(genero, "F") == 0 && idade < 25) {
        printf("%s - ACEITA\n", nome);
    } else {
        printf("%s - NÃO ACEITA\n", nome);
    }

    return 0;
}
