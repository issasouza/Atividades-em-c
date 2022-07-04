#include <stdio.h>
#include <stdlib.h>
int main(void) {
int n_1, n_2, n_3;
int maior;
  
printf("Digite 3 numeros inteiros:\n");
scanf("%d", &n_1);
scanf("%d", &n_2);
scanf("%d", &n_3);
  

maior = n_1;
if(n_2 > maior)
  maior = n_2;
if(n_3 > maior)
  maior = n_3;
printf("O numero %d", maior);
printf(" é o a maior numero");
return 0;
}