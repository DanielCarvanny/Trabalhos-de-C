#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50]; 
    int count = 0, i = 0, j = 0; 
    
    printf("Entre com uma frase de até 50 caracteres: "); 
    fgets(str1, sizeof(str1), stdin); 
    
    for(i = 0; i < 50 && str1[i] != '\0'; i++){       
        if (str1[i] == ' '){
            count++;
        }else if (str1[i] != '\n') {
            str2[j] = str1[i];
            j++;
        }
    }
    
    str2[j] = '\0';
    
    printf("Total de espaços: %d\n", count);
    
    printf("A frase original: %s", str1);
    
    printf("A frase ficou assim: %s", str2);

    return 0;
}
