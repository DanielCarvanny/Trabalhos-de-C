#include <stdio.h>

int main()
{
    FILE *copia;
    char *arquivos_copiar[] = {"C:/Users/dcarv/Workspace/Trabalhos-de-C/Arquivo-dado/Textos/exemplo1.txt", "C:/Users/dcarv/Workspace/Trabalhos-de-C/Arquivo-dado/Textos/exemplo2.txt"};
    int total = 2; 

    copia = fopen("C:/Users/dcarv/Workspace/Trabalhos-de-C/Arquivo-dado/Textos/uniao.txt", "a");
    
    if(copia == NULL){
        printf("Erro ao escrever o arquivo de copia. \n");
        return 1;
    }

    for(int i = 0; i < total; i++){
        FILE *arquivo_atual = fopen(arquivos_copiar[i], "r");
        
        if(arquivo_atual == NULL){
            printf("Erro ao abrir o arquivo: %s\n", arquivos_copiar[i]);
            continue;
        }

        char caractere;
        while((caractere = fgetc(arquivo_atual)) != EOF){
            fputc(caractere, copia);
        }

        fputc('\n', copia);

        fclose(arquivo_atual);
        printf("Conteudo de %s copiado!\n", arquivos_copiar[i]);
    }

    fclose(copia);
    printf("Todos os arquivos foram unidos em 'uniao.txt'. \n");

    return 0;
}
