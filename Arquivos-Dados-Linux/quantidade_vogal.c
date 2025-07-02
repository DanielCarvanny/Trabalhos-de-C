#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *arquivo;

    arquivo = fopen("vogal.txt", "r");
    if(arquivo == NULL){
        printf("Erro na leitura do arquivo\n");
        return -1;
    }

    int c, count = 0;
    while((c = fgetc(arquivo)) != EOF){
        if(c >= 'A' && c <= 'Z'){
            c = tolower(c);
        }

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count ++;
        }
    }

    printf("O total de vogais é: %d\n", count);
    fclose(arquivo);
    return 0;
}