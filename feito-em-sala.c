#include <stdio.h>
int linha (void){
 printf("\n-------------------------------------------------\n");
  return 0;}

int calculo (char op,float num2, float num1);{
  
  
  switch (op) {
  case '+':
     linha ();
    printf(" = %.2f\n", num1 + num2);
    linha ();
    break;
  case '-':
    linha ();
    printf(" = %.2f\n", num1 - num2);
     linha ();
    break;
  default:
    printf(" Operador inválido!\n");
  }

  return 0
  }

int main(void);
{
 
 linha ();
  printf("Digite um número, um operador e um número:\n");
  scanf(" %f  %c %f\n", &num1, &op, &num2); 
 
calculo (char op,float num2, float num1)
linha ();
    
}
