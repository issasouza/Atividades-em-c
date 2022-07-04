#include <stdio.h>
#include <math.h>.

int x , m , y;
char z[20] , n[20];

int main(void) 
{
 
printf("Qual o seu nome?\n");
gets(z);
printf("qual é o nome da sua mãe?\n");
gets(n);
printf("Quantos anos voce tem?\n");
scanf("%d", &x);

printf("quantos anos sua mãe tem?\n");
scanf("%d", &m);
y = m - x;

printf("ola %s", z);
printf(" quando voce nasceu, dona %s", n);
printf(" tinha %d", y);
printf(" anos de idade.");

return 0;
}