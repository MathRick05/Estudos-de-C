#include <stdio.h>

int main() {
    int numHabitantes, i, codigo, consumoTotal = 0, consumoResidencial = 0, consumoComercial = 0, consumoIndustrial = 0;
    float kwhValor, consumoMes, maiorConsumo = 0, menorConsumo = 0, mediaConsumo = 0;

    // Ler o número de habitantes
    printf("Digite o número de habitantes: ");
    scanf("%d", &numHabitantes);

    // Ler o valor do kwh
    printf("Digite o valor do kwh: R$ ");
    scanf("%f", &kwhValor);

    // Loop para ler os dados de cada habitante
    for (i = 1; i <= numHabitantes; i++) {
        // Ler o código do consumidor
        printf("Digite o código do consumidor (%d - Residencial, %d - Comercial, %d - Industrial): ", 1, 2, 3);
        scanf("%d", &codigo);

        // Ler o consumo do mês
        printf("Digite o consumo do mês (kWh): ");
        scanf("%f", &consumoMes);

        // Atualizar o consumo total
        consumoTotal += consumoMes;

        // Atualizar o consumo por categoria
        switch (codigo) {
            case 1:
                consumoResidencial += consumoMes;
                break;
            case 2:
                consumoComercial += consumoMes;
                break;
            case 3:
                consumoIndustrial += consumoMes;
                break;
        }

        // Atualizar o maior e menor consumo
        if (consumoMes > maiorConsumo) {
            maiorConsumo = consumoMes;
        }
        if (consumoMes < menorConsumo || menorConsumo == 0) {
            menorConsumo = consumoMes;
        }
    }

    // Calcular a média de consumo
    mediaConsumo = consumoTotal / numHabitantes;

    // Imprimir os resultados
    printf("\n**Resumo do consumo de energia:**\n");
    printf("Maior consumo: %.2f kWh\n", maiorConsumo);
    printf("Menor consumo: %.2f kWh\n", menorConsumo);
    printf("Média de consumo: %.2f kWh\n", mediaConsumo);
    printf("\n**Consumo por categoria:**\n");
    printf("Residencial: %.2f kWh (%.2f%%)\n", consumoResidencial, (float)consumoResidencial / consumoTotal * 100);
    printf("Comercial: %.2f kWh (%.2f%%)\n", consumoComercial, (float)consumoComercial / consumoTotal * 100);
    printf("Industrial: %.2f kWh (%.2f%%)\n", consumoIndustrial, (float)consumoIndustrial / consumoTotal * 100);

    return 0;
}
