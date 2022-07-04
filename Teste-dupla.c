#include <stdio.h>
int main(void)
{
  int vetor1[5], vetor2[5], vetor3[5], i, soma;

  //Valores do Vetor 1
  for(i=0;i<5;i++)
  {
    printf("Digite 5 números pra o 1 vetor: \n");
    scanf("%d",&vetor1[i]);
  }

  //Valores do Vetor 2
  for(i=0;i<5;i++)
  {
    printf("Digite 5 números pra o segundo vetor \n");
    scanf("%d",&vetor2[i]);
  }

  //Soma de vetores 
   for(i=0;i<5;i++)
  {
     vetor3[i] = vetor1[i]+ vetor2[i];
     printf("%d ", vetor3[i]);
  }
}