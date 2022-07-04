#include <stdio.h>
#include<math.h>

main() 
{
float valor , total;
int cod;
  
printf("qual o código do produto?\n");
scanf("%d"  , &cod);
printf("qual o valor do produto?\n");
scanf("%f,", &valor);
  
printf("O código da compra é %d", cod);  
printf(" ,os valores da loja aumentarao 20%, sua compra ficou: R$ %2.f\n",valor*0.2+valor);
  

}