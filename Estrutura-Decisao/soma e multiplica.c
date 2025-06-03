#include <stdio.h> 
 
int main() { 
    int x1; 
    int x2; 
    int s; 
    int r; 
 
    printf("Escreva um número: "); 
    scanf("%d", &x1); 
 
    printf("\nEscreva um número: "); 
    scanf("%d", &x2); 
    s = x1+x2; 
 
    if(x1 == 0){
        printf("Erro: divisão por zero"); 
    } else{ 
        r = s/x1; 
        printf("Resultado: %d", r); 
    } 
    
    return 0; 
} 
