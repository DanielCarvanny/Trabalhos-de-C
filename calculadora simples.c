int main(){
 float x, y;
 float calc;
 char s;
 
 printf("Escreva uma equação: ");
 scanf("%f %c %f", &x, &s, &y);
 
 switch(s){
     case '+':
     calc = x + y;
     printf("O resultado é: %.2f", calc);
     break;
     
     case '-':
     calc = x - y;
     printf("O resultado é: %.2f", calc);
     break;
     
     case '*':
     calc = x * y;
     printf("O resultado é: %.2f", calc);
     break;
     
     case '/':
     calc = x / y;
     printf("O resultado é: %.2f", calc);
     break;
 }
        
 return 0;
}