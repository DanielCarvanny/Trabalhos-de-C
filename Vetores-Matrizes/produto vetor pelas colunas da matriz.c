#include <stdio.h> 

int main() {  
    float a[3][3], c[3][3], b[3]; 
    int i, j;     

    // Leitura da matriz A 
    printf("Digite os elementos da matriz A:\n"); 
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 

            printf("A[%d][%d]: ", i, j); 

            scanf("%f", &a[i][j]); 
        } 
    } 

    // Leitura do vetor B  
    printf("Digite os elementos do vetor B:\n");  
    for (i = 0; i < 3; i++) {  
        printf("B[%d]: ", i);  
        scanf("%f", &b[i]);  
    }  

    // Multiplicação do vetor pelas colunas da matriz 
    for (i = 0; i < 3; i++) {  
        for (j = 0; j < 3; j++) {  

            c[i][j] = a[i][j] * b[i]; 
        }  
    } 

    // Impressão 
    printf("\nMatriz produto:\n"); 
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 

            printf("C[%d][%d]: %.2f\t", i, j, c[i][j]); 
        } 
        printf("\n"); 
    } 

    return 0;  
} 