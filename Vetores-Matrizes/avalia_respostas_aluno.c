#include <stdio.h>

int main()
{
    char a[5][10], v[10] = {'a','b','c','d','a','b','c','d','d','a'};
    int i, j, certo;
    int result[5];
    
    for(i = 0; i < 5; i++) {
        printf("Aluno %d\n", i+1);
        
        for(j = 0; j < 10; j++) {
            printf("Escreva a letra da resposta: \n");
            printf("(a)\t (b)\n(c)\t (d)\n");
            scanf(" %c", &a[i][j]);
            
            switch(a[i][j]) {
                case 'a':
                case 'b':
                case 'c':
                case 'd':
                    printf("Resposta registrada\n");
                    break;
                    
                default:
                    printf("Resposta inválida\n");
                    j--;
                    break;
            }
        }
    }

    for(i = 0; i < 5; i++) {
        certo = 0;
        
        for(j = 0; j < 10; j++) {
            if(a[i][j] == v[j]) {
                certo++;
            }
        }
        result[i] = certo;
    }
    
    for(i = 0; i < 5; i++) {
        printf("Aluno %d nota: %d\n", i+1, result[i]);
    }

    return 0;
}