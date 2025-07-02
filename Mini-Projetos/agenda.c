#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
struct sHorario
{
    int hora;
    int min;

};
 
struct sData
{
    int dia;
    int mes;
    int ano;

};
 
struct sCompromisso
{
    struct sData data;
    struct sHorario horario;
    char descricao[100];

};

int validaHora(int ch, int cm){
    if (ch <= 24 && ch >= 0 
        && cm < 60 && cm >= 0)
        {
            return 1;
        }
        else{
                printf("Erro no horario informado!\n");
                return 0;
            }
}

int validaData(int dia, int mes, int ano){
    if(mes == 2 && dia > 28){
                    printf("Erro na data informada!");
                    return 0;
                }
                else 
                if (dia <= 31 && dia >= 1 && mes <= 12
                && mes >= 1 && ano >= 2000 & ano <= 2030)
                {
                    return 1;

                }else 
                if(ano < 2000 || ano > 2030){
                    printf("Ano invalido!\n");
                    return 0;

                }else{
                    printf("Erro na data informada!\n");
                    return 0;
                }
}

int criaArquivo(int dia, int mes ,int ano, int hora, int min, char desc[100]){
    FILE *p;
    p = fopen("agenda.txt", "a"); // Modo append

    if(p == NULL){
        printf("Erro na abertura do arquivo. \n");
        printf("Pressione Enter para continuar...");
        getchar();
        exit(1);
        return -1;
    }

    fprintf(p, "**** Compromisso ****\n");
    fprintf(p, "Data: %02d/%02d/%04d\n", dia, mes, ano);
    fprintf(p, "Horário: %02d:%02d\n", hora, min);
    fprintf(p, "Descrição: %s\n\n", desc);

    fclose(p);
    return 0;
}


int lerArquivo(){
    FILE *p;
    char linha[200];

    p = fopen("agenda.txt", "r");

    if(p == NULL){
        printf("Erro na abertura do arquivo. \n");
        printf("Pressione Enter para continuar...");
        getchar();
        exit(1);
        return -1;
    }

    printf("\n***** Conteúdo da Agenda *****\n");
    while(fgets(linha, sizeof(linha), p) != NULL){
        printf("%s", linha);
    }

    fclose(p);
    return 0;
}



int main()
{
    struct sCompromisso c;
    c.data.dia = 1, c.data.mes = 1, c.data.ano = 2000;
    c.horario.hora = 0, c.horario.min = 0;

    int op = 0, op1 = 0;
    int horario = 0;
    int data = 0;
    char ch;

    do
    {
        
        printf("\n******Menu da agenda*******\n");
        printf("Selecione uma opcao:\n");
        printf("1- Agendar\n");
        printf("2- Ver compromissos salvos\n");
        printf("0- Sair\n");
        scanf("%d", &op1);
        
        switch (op1)
        {
            case 1:
                system("clear"); // Limpeza do Terminal no Linux

                do{
                    printf("\n******Agenda*******\n");
                    do{
                        printf("Informe o horario no formato hh:mm : ");
                        scanf("%d %c %d", 
                        &c.horario.hora, &ch,
                        &c.horario.min);
                        horario = validaHora (c.horario.hora, c.horario.min);
                                
                    }while(horario == 0);
                    system("clear"); // Limpeza do Terminal no Linux
                    
                    do{
                        printf("Informe a data no formato dd/mm/aaaa: ");
                        scanf("%d %c %d %c %d", 
                        &c.data.dia, &ch,
                        &c.data.mes, &ch,
                        &c.data.ano);
                        data = validaData(c.data.dia, c.data.mes, c.data.ano);

                    }while(data == 0);
                    
                    system("clear"); // Limpeza do Terminal no Linux
                    printf("Informe a descricao: ");
                    getchar(); // Limpa o buffer de entrada antes do fgets()
                    fgets(c.descricao, sizeof(c.descricao), stdin); // Remove a quebra de linha no final, se existir
                    c.descricao[strcspn(c.descricao, "\n")] = '\0';
                    system("clear"); // Limpeza do Terminal no Linux
                    
                    int editar = 1;
                    while (editar) {
                        printf("\nResumo do compromisso:\n");
                        printf("Data: %02d/%02d/%04d\n", c.data.dia, c.data.mes, c.data.ano);
                        printf("Horário: %02d:%02d\n", c.horario.hora, c.horario.min);
                        printf("Descrição: %s\n", c.descricao);

                        printf("\nDeseja editar alguma informação?\n");
                        printf("1 - Editar horário\n");
                        printf("2 - Editar data\n");
                        printf("3 - Editar descrição\n");
                        printf("0 - Finalizar e salvar\n");
                        scanf("%d", &op);

                        switch (op) {
                        case 1:
                            do {
                            printf("Informe o novo horário (hh:mm): ");
                            scanf("%d %c %d", &c.horario.hora, &ch, &c.horario.min);
                            } while (!validaHora(c.horario.hora, c.horario.min));
                            break;

                        case 2:
                            do {
                            printf("Informe a nova data (dd/mm/aaaa): ");
                            scanf("%d %c %d %c %d", &c.data.dia, &ch, &c.data.mes, &ch, &c.data.ano);
                            } while (!validaData(c.data.dia, c.data.mes, c.data.ano));
                            break;

                        case 3:
                            printf("Informe a nova descrição: ");
                            getchar(); // limpa buffer
                            fgets(c.descricao, sizeof(c.descricao), stdin);
                            c.descricao[strcspn(c.descricao, "\n")] = '\0';
                            break;

                        case 0:
                            printf("\n****Arquivo txt sendo gerado****\n");

                            int result = criaArquivo(c.data.dia, c.data.mes, c.data.ano,
                            c.horario.hora, c.horario.min, c.descricao);

                            if(result == 0){
                                printf("\n*****Sucesso ao gerar o arquivo*****\n");
                                printf("\n*****Voltando ao menu*****\n");
                            }
                            else{
                                printf("\n*****Falha ao gerar o arquivo*****\n");
                                printf("\n*****Voltando ao menu*****\n");
                            }
                            editar = 0;
                            break;

                        default:
                            printf("Opção inválida!\n");
                            break;
                        }
                    }
                                
                }while(op != 0);    
                
                break;
            
            case 2:
                system("clear");
                lerArquivo();
                printf("\nPressione Enter para voltar ao menu...");
                getchar(); getchar(); // Para capturar o Enter
                break;


        
            case 0:
                printf("\n****Programa encerrado!****\n");
                break;
            
            default:
                printf("\n****Opcao invalida!****\n");
                break;
        }
        
    } while (op1 != 0);
    

    return 0;
}
