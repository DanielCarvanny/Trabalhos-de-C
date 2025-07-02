#include <stdio.h>

int verificacao(int n){
    if(n == 0)
    {
        return 0;

    }else if(n > 0)
    {
        return 1;

    }else{
        return -1;
    }
}

int main(){
    int n;

    printf("Digite o valor: ");
    scanf("%d", &n);

    int result = verificacao(n);

    if(result == 0)
    {
        printf("O numero eh 0\n");

    }else if(result == 1){
        printf("O numero eh positivo\n");

    }else{
        printf("O numero eh negativo\n");
    }

    return 0;
}