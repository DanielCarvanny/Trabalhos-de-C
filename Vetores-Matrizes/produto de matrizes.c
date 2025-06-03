#include <stdio.h>  

int main() {  

float a[2][3], b[3][2], c[2][2]; 
int i, j,k; 
 
// Leitura da matriz A 
printf("Digite os elementos da matriz A:\n"); 
for (i = 0; i < 2; i++) { 
    for (j = 0; j < 3; j++) { 
        printf("A[%d][%d]: ", i, j); 
        scanf("%f", &a[i][j]); 
    } 
} 
 
 
// Leitura da matriz B 
printf("Digite os elementos da matriz B:\n"); 
for (i = 0; i < 3; i++) { 
    for (j = 0; j < 2; j++) { 
        printf("B[%d][%d]: ", i, j); 
        scanf("%f", &b[i][j]); 
    } 
} 
 
for(i = 0; i < 3; i++) { 
        for(j = 0; j < 3; j++) { 
            c[i][j] = 0; 
            for(k = 0; k < 2; k++) { 
                c[i][j] += a[i][k] * b[k][j]; 
            } 
        } 
    } 
printf("\nMatriz produto:\n"); 
for (i = 0; i < 2; i++) { 
    for (j = 0; j < 2; j++) { 
        printf("%.2f\t", c[i][j]); 
    } 
} 
 
return 0;  
 } 

