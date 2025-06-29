#include <stdio.h>

struct sNumeroComplexo
{
    float real1, real2;
    float imaginario1, imaginario2;
};


int main()
{
    struct sNumeroComplexo complexo;

    float resultRealSoma, resultImaginarioSoma;
    float resultRealSub, resultImaginarioSub;
    float resultRealMulti, resultImaginarioMulti;

    printf("\n****Primeiro numero complexo****\n");
    printf("\nDigite o numero real: ");
    scanf("%f", &complexo.real1);

    printf("\nDigite o numero imaginário: ");
    scanf("%f", &complexo.imaginario1);

    printf("\n****Segundo numero complexo****\n");
    printf("\nDigite o numero real: ");
    scanf("%f", &complexo.real2);

    printf("\nDigite o numero imaginário: ");
    scanf("%f", &complexo.imaginario2);

    // Soma
    resultRealSoma = complexo.real1 + complexo.real2;
    resultImaginarioSoma = complexo.imaginario1 + complexo.imaginario2;

    // Subtração
    resultRealSub = complexo.real1 - complexo.real2;
    resultImaginarioSub = complexo.imaginario1 - complexo.imaginario2;

    // Multiplicação
    resultRealMulti = complexo.real1 * complexo.real2;
    resultImaginarioMulti = complexo.imaginario1 * complexo.imaginario2;


    printf("\n****Operacoes****\n");
    if ()
    {
        /* code */
    }
    
    printf("Soma: ");

    return 0;
}
