// 3. Elaborar um algoritmo para determinar o consumo médio de um automóvel sendo
// fornecida a distância total percorrida pelo automóvel e o total de combustível gasto. 

#include <stdio.h>

int main(void) {
    float distancia, combustivel;

    printf("Digite a distancia percorrida:");
    scanf("%f", &distancia);
    
    printf("\nDigite o combustivel gasto:");
    scanf("%f", &combustivel);

    float cm = distancia / combustivel;

    printf("Consumo medio: %0.2f km/l", cm);

    return 0;
}