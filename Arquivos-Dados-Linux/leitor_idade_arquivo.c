#include <stdio.h>
#include <stdlib.h> // Para exit()

int main(){
    FILE *arquivo;
    char nome[50];
    int dia, mes, ano;
    int ano_atual;

    printf("Informe o ano atual: ");
    scanf("%d", &ano_atual);

    arquivo = fopen("arq.txt", "r"); // Depende de um arquivo pré-existente 'arq.txt'
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo arq.txt\n");
        exit(1); // Encerra o programa com erro
    }

    while(fscanf(arquivo, "%49s %d %d %d", nome, &dia, &mes, &ano) != EOF){
        int idade = ano_atual-ano;
        printf("Nome: %s\n Idade: %d\n", nome, idade);
    }

    fclose(arquivo);

    return 0;

}