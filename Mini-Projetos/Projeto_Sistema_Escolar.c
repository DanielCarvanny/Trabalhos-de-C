#include <stdio.h>

struct sInformacao
{
    char nome[100];
    int matricula;
    int curso;
    float n1, n2, n3;
};

int media(){

}

int main()
{
    struct sInformacao info[5];

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

    printf("\n*****Notas*****\n");

    int checkMatricula;
    printf("\nDigite a matricula do aluno para informar as notas: ");
    scanf("%d", &checkMatricula);

    for (int i = 0; i < 5; i++)
    {
        if(checkMatricula == info[i].matricula){
            printf("\n*****Informacoes*****\n");
            printf("\nNome: %s\n", info[i].nome);
            printf("Matricula: %d\n", info[i].matricula);
            printf("Curso: %d\n", info[i].curso);

            printf("\n*****NOTAS*****\n");
            printf("Informe as notas da P1, P2, P3: ");
            scanf("%d %d %d", &info[i].n1,&info[i].n2,&info[i].n3);

            for (int i = 0; i < 5; i++)
            {
                printf("\n*****Informacoes*****\n");
                printf("\nNome: %s\n", info[i].nome);
                printf("Matricula: %d\n", info[i].matricula);
                printf("Curso: %d\n", info[i].curso);

                printf("Prova 1: %.f\t", info[i].n1);
                printf("Prova 2: %.f\t", info[i].n2);
                printf("Prova 3: %.f\n", info[i].n3);

            }
            break;
        }
        else
        {
            printf("Matricula invalida!");
        }
        
    }
    
    
    return 0;
}
