#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int media(int n1, int n2)
{
  int media;
  media = n1 / n2 ;
  return media; 
}
 int main()
 
{
int v1 , v2  , resultado;
printf("qual o primeiro valor:");
scanf("%f", &v1);
printf("qual o segundo valor:");
scanf("%f", &v2);
resultado = media(v1, v2 );
printf("o resultado = %d\n", resultado%2);
}
