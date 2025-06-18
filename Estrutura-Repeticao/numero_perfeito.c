#include <stdio.h>

int main()
{
 int somaDivi, perf, resto;
 
 for (int perf = 1; perf <= 100; perf++){
     somaDivi = 0; // Reinicia a soma dos divisores para cada número
     
     // Verifica divisores de 'perf' (de 1 até perf)
     for(int i = 1; i <= perf; i++){
            resto = perf % i;

            if(resto == 0){
                somaDivi += i;
            }
        }
     
     // Verifica se é perfeito (soma = dobro do número)
     if(somaDivi == 2 * perf){
            printf("%d é um número perfeito!\n", perf);
        }
    }

 return 0;
}