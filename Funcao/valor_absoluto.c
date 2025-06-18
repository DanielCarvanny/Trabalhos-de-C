#include <stdio.h>

int absoluto(int n) {
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}

int main(){
   int numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nValores absolutos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero: %d | Valor absoluto: %d\n", numeros[i], absoluto(numeros[i]));
    }

    return 0;
    
}