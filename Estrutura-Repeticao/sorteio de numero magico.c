#include <stdio.h>
#include <stdlib.h>

int main(){
    int count = 0;
    int answer;
    int num;
    
    /* gerando valores aleatórios entre zero e 500 */
    num = rand() % 500;

    while(count < 10){
        count++;
        
        printf("Qual é o número mágico?\n");
        scanf("%d", &answer);
        
        //Comparação
        if(answer > num){
            printf("\nO número mágico é menor\n");
        }
        if(answer < num){
            printf("\nO número mágico é maior\n");
        }
        
        // Resposta
        if(answer == num){
            if(count <= 3){
                printf("Certa a resposta\n");
                printf("Você conseguiu em %d tentativas \n Você é muito sortudo", count);
                break;
            }
            
            if(count > 3 && count <= 6){
                printf("Certa a resposta\n");
                printf("Você conseguiu em %d tentativas \n Você é sortudo", count);
                break;
            }
            
            if(count > 6 && count <= 10){
                printf("Certa a resposta\n");
                printf("Você conseguiu em %d tentativas \n Você foi normal", count);
                break;
            }
        } 
    }
    
    if(count == 10){
        printf("\nTente novamente");
    }

    return 0;
}