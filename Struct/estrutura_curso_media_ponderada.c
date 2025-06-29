#include <stdio.h>
#include <string.h>

struct sInformacao
{
    char nome[100];
    int matricula;
    int codDisciplina;
    float n1, n2;
};

float media(float n1, float n2){
    float result = 0;

    result = ((n1*1)+(n2*2))/3;

    return result;
}

int main()
{
    struct sInformacao info[10];
    
    float mediaAluno[10];

    // Cadastro dos alunos

    for (int i = 0; i < 10; i++)
    {
        printf("\n*****Cadastro*****\n");

        printf("\nEscreva o nome: ");
        fgets(info[i].nome, sizeof(info[i].nome), stdin);
        info[i].nome[strcspn(info[i].nome, "\n")] = '\0';  // Remove a quebra de linha
        
       
        int matriculaValida;
        do {
            matriculaValida = 1; // Assume que é válida
            printf("Digite a matricula: ");
            scanf("%d", &info[i].matricula);

            for (int j = 0; j < i; j++) {
                if (info[i].matricula == info[j].matricula) {
                    printf("Matricula invalida! Tente outra.\n");
                    matriculaValida = 0;
                    break;
                }
            }

        } while (!matriculaValida);

        
        printf("Digite o codigo da disciplina: ");
        scanf("%d", &info[i].codDisciplina);

        // Limpa o buffer de entrada
        while (getchar() != '\n');
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n*****NOTAS*****\n");
        printf("\nAluno: %s\n", info[i].nome);
        printf("Informe as notas da P1, P2: ");
        scanf("%f %f", &info[i].n1,&info[i].n2);

        mediaAluno[i] = media(info[i].n1, info[i].n2);
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n*****Informacoes*****\n");
        printf("\nNome: %s\n", info[i].nome);
        printf("Matricula: %d\n", info[i].matricula);
        printf("Codigo da disciplina: %d\n", info[i].codDisciplina);
        printf("Media final: %.1f", mediaAluno[i]);
    }
    
    
    return 0;
}
