// 8. Faça um programa que leia 3 notas e calcule a média final deste aluno. Considerar que
// a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente.


#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota:");
    scanf("%f", nota1);

    printf("Digite a segunda nota:");
    scanf("%f", nota2);

    printf("Digite a terceira nota:");
    scanf("%f", nota3);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (2 + 3 + 5);

    printf("\nA sua media é %.2f", media);
}