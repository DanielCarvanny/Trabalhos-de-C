#include <stdio.h>
#include <string.h>

struct sInformacao
{
    char nome[100];
    int matricula;
    int curso;
};


int main()
{
    struct sInformacao info[5];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEscreva seu nome: ");
        fgets(info[i].nome, sizeof(info[i].nome), stdin);
        info[i].nome[strcspn(info[i].nome, "\n")] = '\0';  // Remove a quebra de linha
        
       
        int matriculaValida;
        do {
            matriculaValida = 1; // Assume que é válida
            printf("Digite sua matricula: ");
            scanf("%d", &info[i].matricula);

            for (int j = 0; j < i; j++) {
                if (info[i].matricula == info[j].matricula) {
                    printf("Matricula invalida! Tente outra.\n");
                    matriculaValida = 0;
                    break;
                }
            }

        } while (!matriculaValida);

        
        printf("Digite o numero do curso: ");
        scanf("%d", &info[i].curso);

        // Limpa o buffer de entrada
        while (getchar() != '\n');
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n*****Informacoes*****\n");
        printf("\nNome: %s\n", info[i].nome);
        printf("Matricula: %d\n", info[i].matricula);
        printf("Curso: %d\n", info[i].curso);
    }
    
    
    return 0;
}
