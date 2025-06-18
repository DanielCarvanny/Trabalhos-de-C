#include <stdio.h>

int main()
{
    int a[10], c[10];
    int i, j, count = 0;
    
    for(i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &a[i]);
        
        for(j = 0; j < count; j++) {
            if(a[i] == c[j]) {
                printf("Número já selecionado!\n");
                i--;
                break;
            }
        }
        
        if(j == count) {
            c[count] = a[i];
            count++;
        }
    }
    
    for(i = 0; i < 10; i++) {
        printf("A[%d]: %d\n", i, a[i]);
    }

    return 0;
}