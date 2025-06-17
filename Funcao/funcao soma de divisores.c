#include <stdio.h>

int testePositivo(int p){
    if (p < 0){
        return 1;
    }else{
        return 0;
    }
}

int somaDivisores(int n){
    int divisor = 0;
    
    for(int j = 1; j < n; j++)
    {       
        if (n%j == 0)
        {
            divisor = divisor + j;
        }        
    }
    return divisor;
}


int main(){
    int num[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite o valor do numero[%d]: ", i+1);
        scanf("%d", &num[i]);
        
        int positivo = testePositivo(num[i]);
        
        if (positivo == 1)
        {
            i--;
            printf("Numero invalido!\n");
        }
        
    }
    
    printf("\nSoma de Divisores\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Numero: %d | Soma de divisores: %d\n", num[i], somaDivisores(num[i]));
    }
    
    return 0;
}