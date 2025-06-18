#include <stdio.h>

float potencia(float b, int e){
    float mb = 1;
    for(int i = 0; i < e; i++){
        mb *= b;
    }
    return mb;
}

int main(){
    float b;
    int e;
    
    printf("Digite o valor da Base: ");
    scanf("%f", &b);

    printf("Digite o valor do Expoente: ");
    scanf("%d", &e);

    if(e == 1){
        printf("Resultado da potência: %.2f", b);
    }else{
        float resultado = potencia(b, e);
        printf("Resultado da potencia: %.2f\n", resultado);
    }
    

    return 0;
}