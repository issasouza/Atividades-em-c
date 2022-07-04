#include <stdio.h>

int main(void) {
  int vetor1[5], i , vetor2[5];
  for(i=0;i<5;i++)
    {
      printf("digite 5 numeros:\n");
      scanf("%d",&vetor1[i]);
    }
  for(i=0;i<=5;i++)
    {
      printf("digite 5 num:\n");
      scanf("%d",&vetor2[i]);
    }
  printf(vetor1[5],vetor2[5]);
  
}