#include <stdio.h>
#include <string.h>

struct sInformacao
{
    char nome[50];
    int telefone;
    char endereco[200];
};

void ordemAlfabetica(){
    for (int i = 0; i < 5; i++)
    {
        /* code */
    }
    
}

int main()
{
    struct sInformacao info[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEscreva seu nome: ");
        fgets(info[i].nome, sizeof(info[i].nome), stdin);
        info[i].nome[strcspn(info[i].nome, "\n")] = '\0';  // Remove a quebra de linha

        printf("Digite o numero do seu telefone: ");
        scanf("%d", &info[i].telefone);

        printf("Informe seu endereco: ");
        fgets(info[i].endereco, sizeof(info[i].endereco), stdin);
        info[i].endereco[strcspn(info[i].endereco, "\n")] = '\0';  // Remove a quebra de linha

    }


    
    return 0;
}

