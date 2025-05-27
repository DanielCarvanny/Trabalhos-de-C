#include <stdio.h>

int main()
{
    int a[4][4];
    int i, j, m;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Escreva um número: ");
            scanf("%d", &a[i][j]);
            
            if(i == 0 && j == 0) {
                m = a[0][0];
            }
            
            if(a[i][j] > m) {
                m = a[i][j];
            }
        }
    }

    printf("O maior número: %d\n", m);

    return 0;
}