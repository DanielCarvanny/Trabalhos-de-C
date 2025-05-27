
#include <stdio.h>

int main() {
 int n1, n2, nf;
 float m, final;

 printf("Escreva a nota: \n n1 e n2: ");
 scanf("%d %d", &n1, &n2);
 
 m = (n1+n2)/2;
 
 if( m >= 70){
     printf("Aprovado");
 } else if( m <= 69 && m >= 40){
     printf("Exame Final");
     
     printf("\nNota do exame final: ");
     scanf("%d", &nf);
     
     final = m+nf;
     
     if(final >= 100){
            printf("Aprovado");
        } else{
            printf("Reprovado");
        }
    } 
 
 else if(m < 40){
     printf("Reprovado");
    } 
 return 0;
}