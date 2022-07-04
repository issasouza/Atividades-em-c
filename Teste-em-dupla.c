
#include <stdio.h>

int main(void)
{
  int vetor[10], i;

  for(i=0;i<10;i++)
  {
  printf("Digite 10 números: \n");
  scanf("%d",&vetor[i]);
  }
  for (i=10; i>=0; i--)
  {
  printf("%d\n", vetor[i]);
  }
  
  return 0;
}