#include <stdio.h> 
 
int main() { 
    int x; 
    int s = 0; 
    int m; 
    int count = 0; 
 
    for(int i = 0; i < 4; i++){ 
        printf("Escreva um número: "); 
        scanf("%d", &x); 
 
        s = s+x; 
        count++; 
    } 

    m = s/count; 
    printf("Resultado: %d", m); 

    return 0; 
} 
