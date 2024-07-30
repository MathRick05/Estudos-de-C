#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Solicita as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Calcula a média
    media = (nota1 + nota2) / 2.0;

    // Exibe a média e a mensagem de aprovação/reprovação
    if (media < 5.0) {
        printf("Média: %.1f - Reprovado\n", media);
    } else if (media >= 5.1 && media <= 6.9) {
        printf("Média: %.1f - Exame\n", media);
    } else {
        printf("Média: %.1f - Aprovado\n", media);
    }

    return 0;
}
