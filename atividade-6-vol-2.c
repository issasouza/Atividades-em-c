#include <stdio.h>
#include <stdlib.h>

int main(void) {
int n_1, n_2, n_3, n_4;
int menor;

printf("Digite 4 numeros inteiros:\n");
scanf("%d", &n_1);
scanf("%d", &n_2);
scanf("%d", &n_3);
scanf("%d", &n_4);

menor = n_1;
if(n_2 < menor)
   menor = n_2;
if(n_3 < menor)
  menor = n_3;
if (n_4 < menor)
  menor = n_4;

printf("O numero %d", menor);
printf(" é o a menor numero");
  return 0;
}