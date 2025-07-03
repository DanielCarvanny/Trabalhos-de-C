#include <stdio.h>

struct sProduto{
    int cod;
    char nome[50];
    int qtd;
    float precoUnit;
};

int main(){
    struct sProduto produto[5];
    float total[5];

    for(int i = 0; i < 5; i++){
        printf("Escreva o codigo do produto: ");
        scanf("%d", &produto[i].cod);

        printf("Escreva o nome do produto: ");
        scanf("%s", &produto[i].nome);

        printf("Quantidade no estoque: ");
        scanf("%d", &produto[i].qtd);

        printf("Preco unitario: ");
        scanf("%f", &produto[i].precoUnit);

        total[i] = produto[i].qtd * produto[i].precoUnit;

        printf("Valor total do estoque: %.2f\n", total[i]);
    }

    return 0;

}