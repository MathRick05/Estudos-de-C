// 7. Crie um programa que solicite ao usuário a digitação de três notas, ao fim do programa
// apresentar a média das mesmas.

#include <stdio.h>

int main(void){
    
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota:");
    scanf("%f", nota1);

    printf("Digite a segunda nota:");
    scanf("%f", nota2);

    printf("Digite a terceira nota:");
    scanf("%f", nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nA sua media é %.2f", media);


// Aqui foi só  uma tentativa minha de fazer de um jeito diferente, mas não deu certo do jeito que eu queria.
//     int i;
//     float nota[3];
//     float media;

// /*Aqui eu queria fazer com que ele percorra o tamanho que eu dei ao vetor nota, mesmo que eu mude o tamanho do vetor*/
//     for (i = 0; i < 3; i++)
//     {
//         printf("Digite a nota %d:", i + 1);
//         scanf("%f", &nota[i]);
//     }

//     media = (nota[0] + nota[1] + nota[2]) / 3;
    
//     printf("\nA sua media é %.2f", media);

    return 0;

}