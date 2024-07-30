// 5. Elaborar um programa que efetue a conversão de um valor em real (R$) para dólar
// (US$). Solicite ao usuário o valor em reais e a cotação atual do dólar. 

#include <stdio.h>
int main(void){

    float cotacaoDolar, valorReal, valorDolar;

    printf("Digite o valor em reais:");
    scanf("%f", &valorReal);

    printf("Digite a cotação atual do Dolar:");
    scanf("%f", &cotacaoDolar);

    valorDolar = valorReal * cotacaoDolar;

    printf("Este é o valor em dolar %.2f", valorDolar);

    return 0;
}