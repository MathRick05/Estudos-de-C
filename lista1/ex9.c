#include<stdio.h>
    int main(){
        float custo_fabrica, porcent_distribui, impostos, custo_final;
        impostos = 0.45;
        porcent_distribui = 0.28;

        printf("Qual O Custo Do Carro: ");
            scanf("%f", &custo_fabrica);

        custo_final = custo_fabrica + (custo_fabrica * impostos) + (custo_fabrica * porcent_distribui);

        printf("O Preco Final Sera: %.3f", custo_final);

    return(0);
    }