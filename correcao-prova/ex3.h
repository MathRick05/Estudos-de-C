int prova3(){
    int i;
    float tempo, soma=0, media, maior;

    printf("Informe os 10 tempos\n");
    for(i=0; i<10; i++){
        scanf("%f", &tempo);
        soma=soma+tempo;

        if (i==0) {
            maior=tempo;
        }
        if (tempo>maior){
            maior=tempo;
        }
    }

    media=soma / 10;
    printf("a media dos tempos eh %f\n", media);
    printf("O tempo desclassificado foi %f\n", maior);

}
