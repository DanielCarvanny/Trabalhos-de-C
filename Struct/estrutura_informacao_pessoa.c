#include <stdio.h>
#include <string.h>

struct informacao
{
    char nome[100];
    int idade;
    char endereco[200];
};

int validaIdade(int idade){
    if (idade >= 0)
    {
        return 1;
    }else
    {
        return 0;
    }
    
}

int main(){
    struct informacao info;
    info.idade = 0;
    int verificacao = 0;

    printf("Escreva seu nome: ");
    fgets(info.nome, sizeof(info.nome), stdin);
    info.nome[strcspn(info.nome, "\n")] = '\0';  // Remove a quebra de linha

    do
    {
        printf("Digite a sua idade: ");
        scanf("%d", &info.idade);

        verificacao = validaIdade(info.idade);

    } while (verificacao != 1);

    // Limpa o buffer de entrada
    while (getchar() != '\n');

    printf("Informe seu endereco: ");
    fgets(info.endereco, sizeof(info.endereco), stdin);
    info.endereco[strcspn(info.endereco, "\n")] = '\0'; // Remove a quebra de linha


    printf("\n*****Informacoes*****\n");
    printf("Nome: %s\n", info.nome);
    printf("Idade: %d\n", info.idade);
    printf("Endereco: %s\n", info.endereco);
    
    return 0;

}