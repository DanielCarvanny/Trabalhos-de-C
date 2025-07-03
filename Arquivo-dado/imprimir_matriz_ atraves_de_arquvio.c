#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo_entrada;

    arquivo_entrada = fopen("C:/Users/dcarv/Workspace/Trabalhos-de-C/Arquivo-dado/Textos/matriz.txt", "r");
    
    if(arquivo_entrada == NULL){
        printf("Erro ao abrir o arquivo de copia. \n");
        return 1;
    }

    int l, c;
    fscanf(arquivo_entrada, "%d %d", &l, &c);

    int **matriz = (int **)malloc(l * sizeof(int *));

    for(int i = 0; i < l; i++){
        matriz[i] = (int *)malloc(c * sizeof(int));
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            matriz[i][j] = 1;
        }
    }

    int posicoes_anular;
    fscanf(arquivo_entrada, "%d", &posicoes_anular);

    for(int k = 0; k < posicoes_anular; k++){
        int linha, coluna;
        fscanf(arquivo_entrada, "%d %d", &linha, &coluna);
        matriz[linha][coluna] = 0;
    }
    fclose(arquivo_entrada);

    printf("Matriz Resultante: \n");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < l; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}