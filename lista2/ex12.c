#include <stdio.h>
#include <math.h>

int main() {
    float cateto1, cateto2, hipotenusa;

    // Solicita os catetos do triângulo
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    // Calcula a hipotenusa
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    // Verifica se a hipotenusa é maior que 100
    if (hipotenusa > 100.0) {
        printf("Hipotenusa excede o tamanho permitido para área.\n");
    } else {
        printf("Hipotenusa aceita.\n");
    }

    return 0;
}
