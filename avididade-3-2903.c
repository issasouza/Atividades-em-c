#include <stdio.h>
#include <stdlib.h>

int nu1, nu2, nu3;
int main(void) {
  int men;
  printf("\nDigite número 1: ");
  scanf("%d", &nu1);
  printf("\nDigite número 2: ");
  scanf("%d", &nu2);
  printf("\nDigite número 3: ");
  scanf("%d", &nu3);
  
  numero1();

  return 0;
}
int numero1() {
  if (nu1 < nu2 && nu1 < nu3)
    printf("%d é o menor número.", nu1);

  else if (nu2 < nu1 && nu2 < nu3)
  { printf("%d é o menor número.", nu2);}

  else {(nu3 < nu2 && nu3 < nu1);
    printf("%d é o menor número.", nu3);}
}

