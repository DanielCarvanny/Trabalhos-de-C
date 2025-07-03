#include <stdio.h>

int main(){
    int num[5], resultado[5];
    FILE *n;
    
    n = fopen("numeros.txt", "w");

    printf("Digite 5 numeros inteiros: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
        fprintf(n,"%d\n",num[i]);
    }

    fclose(n);

    n = fopen("numeros.txt", "r");

    printf("numeros lidos: \n");

   for(int i = 0; i < 5; i++){
        fscanf(n,"%d\n", &resultado[i]);
        printf("%d\n", resultado[i]);
    }

    fclose(n);

    return 0;

}