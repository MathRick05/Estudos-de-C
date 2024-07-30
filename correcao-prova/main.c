#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"




int main()
{
   int op;
   float A, B, C, media;
   char tipo;

   printf("Qual exercicio deseja?\n");
   printf("1 - prova 1\n");
   printf("2 - prova 2\n");
   printf("3 - prova 3\n");
   printf("4 - prova 4\n");
   scanf("%i", &op);

   switch (op) {
   case 1:
    prova1();
    break;
   case 2:
    prova2();
    break;
   case 3:
    prova3();
    break;
   case 4:
       printf("Informe notas A, B e C\n");
       scanf("%f%f%f", &A, &B, &C);
       printf("Qual media deseja calcular\n");
       printf("A - aritmetica\nH - Harmonica\nP - Ponderada\n");
       scanf("%s", &tipo);
       media = prova4(A, B, C, tipo);
       printf("A media eh %f\n", media);
       break;
   }
   return 0;
}
