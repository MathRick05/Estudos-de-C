// 2. Escreva um algoritmo que solicite ao usuário um numero e apresente na tela o seu
// antecessor e sucessor.

#include <stdio.h>

int main(void) {

    int num1;
    printf("Digite um numero:");
    scanf("%d", &num1);

    int ante = num1 - 1;
    int succ = num1 + 1;

    printf("Numero antecessor: %d\n", ante);
    printf("Numero sucessor: %d", succ);
    
    return 0;
}