#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50]; 
    int i = 0; 
    
    printf("Entre com uma frase ou palavra de até 50 letras: "); 
    fgets(str1, sizeof(str1), stdin); 
    
    for(i = 0; i < 50 && str1[i] != '\0'; i++){
        if(str1[i] == ' '){
            str2[i] = str1[i];
        }else if(str1[i] != '\n'){
            str2[i] = str1[i]+3;
        }
    }
    
    printf("A String original: %s\n", str1);
    
    printf("A String codificada: %s", str2);

    return 0;
}
