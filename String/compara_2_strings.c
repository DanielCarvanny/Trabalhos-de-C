#include <stdio.h>
int main()
{
    char str1[10], str2[10], str3[10];
    int count = 0, i = 0;
    
    printf("Entre com uma String: ");
    scanf("%s", str1);
    
    printf("Entre com uma String: ");
    scanf("%s", str2);
    
    for(i = 0; i < 10 && str1[i] != '\0' && str2[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            count++;
            break;  
        } 
    }

    if(count){
        printf("As Strings são iguais");
    }else {
        printf("As Strings não são iguais");

    } 

    return 0;
}