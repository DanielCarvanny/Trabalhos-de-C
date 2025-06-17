#include <stdio.h>
#include <ctype.h>

float media(float n1, float n2, float n3, char l){
    float result = 0;
    l = toupper(l); // Converte para maiúscula

    switch (l)
    {
    case 'A':
        result =(n1+n2+n3)/3;
        break;
    
    case 'P':
        result =((n1*5)+(n2*3)+(n3*2))/10;
        break;

    case 'H':
        result = 3/((1/n1)+(1/n2)+(1/n3));
        break;
    
    default:
        printf("Opcao invalida!\n");
        result = -1;
        break;
    }

    return result;
}

int main(){
    float n1, n2, n3;
    char letra;
    float resultado;

    printf("Digite as notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    do
    {
        printf("Digite a letra do tipo de media\n");
        printf("A- Media Aritmetica\n");
        printf("P- Media Ponderada\n");
        printf("H- Media Harmonica\n");
        scanf(" %c", &letra);

        resultado = media(n1, n2, n3, letra);    
    }while (resultado == -1);
        
        
    
    if(resultado != -1) {
        printf("\nMedia do Aluno: %.f\n", resultado);
    }

    return 0;
}