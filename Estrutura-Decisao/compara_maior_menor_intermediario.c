
#include <stdio.h>

int main(){
 float x, y , z;
 float maior = 0;
 float menor = 0;
 float medio = 0;
 
 printf("Escreva um número: ");
 scanf("%f", &x);
 
 printf("Escreva um número: ");
 scanf("%f", &y);
 
 printf("Escreva um número: ");
 scanf("%f", &z);
 
 maior = menor = x;
 
 if(y > maior){
     maior = y;
 } else if(y < menor){
     menor = y;
 }
 
 if(z > maior){
     maior = z;
 }else if(z < menor){
     menor = z;
 }
 
 if(x != maior && x != menor){
     medio = x;
 } else if(y != maior && y != menor){
     medio = y;
 }else if(z != maior && z != menor){
     medio = z;
 }
 
 printf("Em ordem o \n maior: %f \n médio: %f \n menor: %f", maior, medio, menor);
 
 return 0;
}