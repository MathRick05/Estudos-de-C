
int prova1 (){
    int ini, ter, total;
    printf("Hora de inicio\n");
    scanf("%i", &ini);
    printf("Hora de termino\n");
    scanf("%i", &ter);

    if (ini>ter){
            total = (24 - ini) + ter;

    }else {
    total = ter - ini;
    }

    printf("Seu rendimento foi de %i horas. Parabens\n", total);
}
