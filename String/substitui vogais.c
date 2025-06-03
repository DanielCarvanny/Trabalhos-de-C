#include <stdio.h>

int main() { 
    char str1[20], str2[20], sub; 
    int count = 0, i = 0; 
     
    printf("Entre com uma palavra de até 20 caracteres: "); 
    scanf("%s", str1); 
     
    for(i = 0; i < 20 && str1[i] != '\0'; i++)
    { 
        switch (str1[i])
        { 
            case 'a': 
                count++; 
                break; 
             
            case 'e': 
                count++; 
                break; 
             
            case 'i': 
                count++; 
                break; 
             
            case 'o': 
                count++; 
                break; 
             
            case 'u': 
                count++; 
                break; 
             
            case 'A': 
                count++; 
                break; 
             
            case 'E': 
                count++; 
                break; 
             
            case 'I': 
                count++; 
                break; 
             
            case 'O': 
                count++; 
                break; 
             
            case 'U': 
                count++; 
                break; 
             
            default: 
                break; 
        } 
    } 
     
    printf("Total de vogais: %d", count); 
    getchar(); 
    printf("\nInforme um caractere para substituir as vogais da palavra: "); 
    scanf("%c", &sub); 
     
    for(i = 0; i < 20 && str1[i] != '\0'; i++)
    { 
        str2[i] = str1[i]; 
         
        switch (str1[i])
        { 
            case 'a': 
                str2[i] = sub; 
                break; 
             
            case 'e': 
                str2[i] = sub; 
                break; 
             
            case 'i': 
                str2[i] = sub; 
                break; 
             
            case 'o': 
                str2[i] = sub; 
                break; 
             
            case 'u': 
                str2[i] = sub; 
                break; 
             
            case 'A': 
                str2[i] = sub; 
                break; 
             
            case 'E': 
                str2[i] = sub; 
                break; 
             
            case 'I': 
                str2[i] = sub; 
                break; 
             
            case 'O': 
                str2[i] = sub; 
                break; 
             
            case 'U': 
                str2[i] = sub; 
                break; 
             
            default: 
                break; 
        } 
    } 
     
    printf("\nA nova palavra é %s", str2); 
    return 0; 
}