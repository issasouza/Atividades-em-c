#include <stdio.h>
#include <stdlib.h>

 float media(float n1, float n2, float n3){
   float r;
   r = (n1 +n2+ n3)/3;
   return r;
  }
  
int main(void) {
  float nota1, nota2, nota3;
  
  printf("\ndigite nota 1: \n");
  scanf("%f",&nota1);
  printf("\ndigite nota 2: \n");
  scanf("%f",&nota2);
  printf("\ndigite nota 3: \n");
  scanf("%f",&nota3);
  
  

  printf("\n\nsua media é: %.1f", media(nota1, nota2, nota3));
  
  return 0;
}


