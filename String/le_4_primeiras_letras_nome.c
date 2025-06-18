#include <stdio.h>

int main()
{
    char n[10];
    
    printf("Escreva um nome: ");
    scanf("%s", n);
    
    printf("As primeiras letras são: \n");
    
    for(int i = 0; i < 4 && n[i] != '\0'; i++){
        printf("%c ",n[i]);
    }

    return 0;
}