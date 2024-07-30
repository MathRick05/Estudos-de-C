// 6. Crie um programa que realize o calculo do IMC (índice de massa corpórea), solicitando
// ao usuário seu peso e altura.  IMC = peso / altura2

#include <stdio.h>

int main(void){

    float peso, altura, imc;

    printf("Digite seu peso em kg:");
    scanf("%f", &peso);

    printf("opa");

    printf("Digite sua altura em metros:");
    scanf("%f", &altura);

    imc = peso/ (altura * altura);

    printf("Seu IMC e %.2f", imc);

    return 0;
}