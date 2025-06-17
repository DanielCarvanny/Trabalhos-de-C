#include <stdio.h>
#include <math.h>

float distancia(float x1,float x2, float y1 , float y2) {
    float dx;
    float dy;
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    
    return sqrt((dx*dx) + (dy*dy));

}

int main() {
	float x1, x2, y1, y2;
	
	printf("Digite x1 e y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%f %f", &x2, &y2);

	float resultado = distancia(x1, x2, y1, y2);
	printf("A distancia eh: %.2f\n", resultado);

	return 0;
}