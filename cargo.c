#include <stdio.h>

int main(void) {
  int cargo, sal, c;
  do {
    system("cls");
  printf("\nCARGOS\n\n\n\n");

  printf("Qual o seu cargo: \n");
  printf(" 1 - Estagiario\n 2 - Engenheiro \n 3 - Contador\n");
  scanf("%d", &cargo);
  printf("Escreva seu salario: ");
  scanf("%d", &sal);
  
    switch (cargo) {
    case 1:
      sal = sal + 200;
      printf("Seu salario atual é de: %d", sal);
      break;
    case 2:
      sal = sal + 400;
      printf("Seu salario atual é de: %d", sal);
      break;
    case 3:
      sal = sal + 600;
      printf("Seu salario atual é de: %d", sal);
      break;
    default:
      printf("\nO cargo esta incorreto\n\n");
      break;
    }
    printf("\nDeseja realizar uma nova operação?\n 0 - sim\n 1 - nao\n");
    scanf("%d", &c);
  } while (c==0);

      printf("se seu salario nao ta ai vc é um fodido irmao");

  return 0;
}