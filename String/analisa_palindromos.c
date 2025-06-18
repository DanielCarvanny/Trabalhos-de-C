#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100]; 
    int i, j = 0, erro = 0; 
    
    printf("Entre com uma frase ou palavra: "); 
    fgets(str1, sizeof(str1), stdin);
    
    // Remove o '\n'
    for(i = 0; str1[i] != '\0'; i++){
        if(str1[i] == '\n'){
            str1[i] = '\0';
        }
    }

    // Remover espaços e converter para minúsculas  
    for(i = 0; str1[i] != '\0'; i++){
        // Copia somente as letras
        if((str1[i] >= 'A' && str1[i] <= 'Z') || 
        (str1[i] >= 'a' && str1[i] <= 'z')){
            
            char letra = str1[i];
            
            if (letra >= 'A' && letra <= 'Z') {
                letra = letra + 32;
            }
            
            str2[j] = letra;
            j++;
        }
    }
    str2[j] = '\0';
   
    int len = strlen(str2);

    // Compara a palavra ao contrário
    for(i = 0; i < len / 2; i++){
        if(str2[i] != str2[len - i - 1]){
            erro = 1;
            break;
        }
    }
    
    
     if (erro) {
        printf("A String NÃO é um palíndromo\n");
    } else {
        printf("A String É um palíndromo\n");
    }

    return 0;
}
