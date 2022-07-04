#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float n1, float n2, float n3)
{
  float media;
  media = n1 + n2 + n3;
  return media; 
}
 int main()
 
{
float v1 , v2 , v3 , resultado;
printf("qual a primeira nota:");
scanf("%f", &v1);
printf("qual a segunda nota:");
scanf("%f", &v2);
printf("qual a terceira nota:");
scanf("%f", &v3);
resultado = media(v1, v2 , v3);
printf("o resultado = %f\n", resultado/2);
}
