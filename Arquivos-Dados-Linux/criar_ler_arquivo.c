#include <stdio.h>
#include <string.h>

int main(){
    char titulo[100], txt[250];

    printf("Escreva o titulo do arquivo: ");
    fgets(titulo, sizeof(titulo), stdin);

        // Remove a quebra de linha (\n) do final do título
    titulo[strcspn(titulo, "\n")] = '\0';

    // Verifica se termina com .txt, se não, adiciona
    if(strstr(titulo, ".txt") == NULL) {
        strcat(titulo, ".txt");
    }

    FILE *arquivo;
    arquivo = fopen(titulo, "w");

    if(arquivo == NULL) {
        printf("Erro ao criar o arquivo %s!\n", titulo);
        return 1;
    }

    printf("Escreva o texto do arquivo:\n");
    fgets(txt, sizeof(txt), stdin);
    fputs(txt, arquivo);

    fclose(arquivo);

    // Ler arquivo
    arquivo = fopen(titulo, "r");
    if (arquivo == NULL)
    {
        printf("Erro ao ler o arquivo %s!\n", titulo);
        return 1;        
    }

    char ler_txt[250];
    while(fscanf(arquivo, "%s", ler_txt) != EOF){
        printf("%s ", ler_txt);
    }
    printf("\n");
    fclose(arquivo);
    return 0;
    
}