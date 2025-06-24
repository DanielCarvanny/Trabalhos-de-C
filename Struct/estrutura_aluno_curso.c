#include <stdio.h>
#include <string.h>

struct sInformacao
{
    char nome[100];
    int matricula;
    int curso;
    float n1, n2, n3;
};

float media(float n1, float n2, float n3){
    float result = 0;

    result = (n1+n2+n3)/3;

    return result;
}

int main()
{
    struct sInformacao info[5];
    
    float mediaAluno[5];
    char vencedorP1[100] = "";
    char maiorMNome[100] = "";
    char menorMNome[100] = "";

    float maiorN1 = -1.0;
    float maiorM = -1.0;
    float menorM = 11.0;

    // Cadastro dos alunos

    for (int i = 0; i < 5; i++)
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

        
        printf("Digite o numero do curso: ");
        scanf("%d", &info[i].curso);

        // Limpa o buffer de entrada
        while (getchar() != '\n');
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n*****Informacoes*****\n");
        printf("\nNome: %s\n", info[i].nome);
        printf("Matricula: %d\n", info[i].matricula);
        printf("Curso: %d\n", info[i].curso);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n*****NOTAS*****\n");
        printf("\nAluno: %s\n", info[i].nome);
        printf("Informe as notas da P1, P2, P3: ");
        scanf("%f %f %f", &info[i].n1,&info[i].n2,&info[i].n3);
        
        mediaAluno[i] = media(info[i].n1, info[i].n2, info[i].n3);

        // Maior nota da P1
        if(info[i].n1 > maiorN1){
            maiorN1 = info[i].n1;
            strcpy (vencedorP1, info[i].nome);
        }

        // Médias

        if(mediaAluno[i] > maiorM){
            maiorM = mediaAluno[i];
            strcpy (maiorMNome, info[i].nome);
        }

        if(mediaAluno[i] < menorM){
            menorM = mediaAluno[i];
            strcpy (menorMNome, info[i].nome);
        }
    }
    
    printf("\n*****Maior Nota P1*****\n");
    printf("Aluno %s\n", vencedorP1);
    printf("Nota: %.1f\n", maiorN1);

    printf("\n*****Maior media*****\n");
    printf("Aluno %s\n", maiorMNome);
    printf("Media: %.1f\n", maiorM);

    printf("\n*****Menor media*****\n");
    printf("Aluno %s\n", menorMNome);
    printf("Media: %.1f\n", menorM);
    
    return 0;
}
