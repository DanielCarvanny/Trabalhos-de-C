#include <stdio.h>

int main() {
 int count = 0;
 int soma;
 
 // Loop para gerar todas as peças do dominó
 for (int a = 0; a <= 6; a++) {
     for (int b = a; b <= 6; b++) { // Evita repetições 
            if (a == 4) count++; // Conta o primeiro número (A)
            if (b == 4) count++; // Conta o segundo número (B)
            soma = 4*count;
        }
    }
 
 printf("Total de números '4' no dominó: %d\n", count);
 printf("Total da soma de todos os números '4' é %d", soma);
 
 return 0;
}
