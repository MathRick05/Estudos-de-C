#include <stdio.h>

int main() {
    int idade, peso;

    // Solicita a idade e o peso do usuário
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%d", &peso);

    // Verifica se a pessoa pode doar sangue
    if (idade >= 18 && idade <= 67 && peso >= 50) {
        printf("Você pode doar sangue!\n");
    } else {
        printf("Você não pode doar sangue.\n");
    }

    return 0;
}
