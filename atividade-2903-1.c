#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int media(float n1, float n2)
{
  int media;
  media = n1 / n2 ;
  return media; 
}
 int main()
 
{
int v1 , v2 , v3 , resultado;
printf("qual o primeiro valor:");
scanf("%f", &v1);
printf("qual o segundo valor:");
scanf("%f", &v2);
//printf("qual a terceira nota:");
//scanf("%f", &v3);
resultado = media(v1, v2 );
printf("o resultado = %d\n", resultado%2);
}
