// 4. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
// escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e
// mês com 30 dias.

#include <stdio.h>

int main(void){

    float idade, dia, mes, ano;
    
    printf("Digite sua idade: dd/mm/aaaa\n");
    scanf("%f", &dia);
    scanf("%f", &mes);
    scanf("%f", &ano);

    idade = ((2024 - ano) * 365) + (mes * 30) + dia;

    printf("%.0f", idade);

    return 0;
}