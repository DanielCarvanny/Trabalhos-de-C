#include <stdio.h>

int main(){
    char str1[20], str2[20];
    int count = 0, i = 0;
    
    printf("Entre com uma palavra de até 20 caracteres: ");
    scanf("%s", str1);
    
    for(i = 0; i < 20 && str1[i] != '\0'; i++){
        str2[i] = str1[i];
        count++;
    }
    
    for(int j = count; j >= 0; j--){
        printf("%c", str2[j]);
    }

    return 0;
}