#include <stdio.h>

int main() {
 int h;
 float vh, add, s;

 printf("Digite o número de horas trabalhadas na semana: ");
 scanf("%d", &h);
 
 printf("Digite o valor da hora de trabalho: R$ ");
 scanf("%f", &vh);
 
 if( h <= 40 ){
     printf("Foram %d horas trabalhadas na semana\n", h);
     printf("Não há nenhum adicional");
     
     s = h * vh;
    } 
 else if( h > 40 && h <= 60){
     printf("Foram %d horas trabalhadas na semana\n", h);
     
     add = vh * 1.5;
     printf("O adicional foi de %.2f reais", add);
     
     s = (h*vh) + add;
    } else if(h > 60){
     printf("Foram %d horas trabalhadas na semana\n", h);
     
     add = vh;
     printf("O adicional foi de %.2f reais", add);
     
     s = (h * vh) + add;
    }
 
 printf("\nSalário semanal: R$ %.2f\n", s);
 
 return 0;
}
