#include <stdio.h>
 
int main() { 
   float t, f;
   int opcao = 0;
   
   printf("Escolha qual o tipo de trasnformação de hora:\n 1. Minuto para Segundos\n 2. Hora para Segundos\n");
   scanf("%d", &opcao);
   
   printf("Escreva a duração do evento: "); 
   scanf("%f", &t);
   
   switch(opcao){
     case 1: // Minuto para segundos
        f = t*60;
        printf("%.2f minutos são equivalentes a %.2f segundos de evento", t, f);
        break;
     
     case 2: // Hora para segundos
        f = t *3600;
        printf("%.2f horas são equivalentes a %.2f segundos de evento", t, f);
        break;
   }
   return 0; 
}