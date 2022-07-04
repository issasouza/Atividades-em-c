#include <stdio.h>
//reajuste do salario 
int main() {
  float salario;
  char funcionario[30];
  printf("Qual o nome do funcionario: ");
  fflush(stdin);
  gets(funcionario);
  printf("\nQual o salario atual de %s:", &funcionario);
  scanf("%f", &salario);
 salario *= 1 + 0.05;
  printf("O valor do almento é: %f", salario);
  return 0;
}