#include <stdio.h>

struct sCarro{
    char marca[15];
    int ano;
    float preco;
};

int main(){
    struct sCarro carro[5];
    float p;

    // Armazena os dados
    for(int i = 0; i < 5; i++){
        printf("Marca: ");
        scanf("%s", &carro[i].marca);

        printf("Ano: ");
        scanf("%d", &carro[i].ano);

        printf("Preco: ");
        scanf("%f", &carro[i].preco);
    }

    // Listar os carros
    do{
        printf("Informe o preco: ");
        scanf("%f", &p);
        
        for(int i = 0; i < 5; i++){
            if(p > carro[i].preco){
                printf("Marca: %s \n Ano: %d \n Preco: %.2f\n", carro[i].marca, carro[i].ano, carro[i].preco);
                printf("Digite 0 para encerrar o programa.\n");
            }
        }

    }while(p != 0);

    return 0;
    
}