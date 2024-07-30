int prova2 (){

 int x, i, soma=0;
 printf("informe o valor\n");
 scanf("%i", &x);

    for(i=1; i<x; i++){
        if(x%i==0){
            soma = soma + i;
        }
    }
    if (soma ==x){
        printf("eh um numero perfeiot\n");
    } else {
        printf("nao eh um numero perfeito\n");
    }
}
