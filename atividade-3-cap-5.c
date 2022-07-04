#include <stdio.h>

main()
{
int valor , v;  
printf("Digite um numero: ");
scanf("%d", &valor);

printf("\nO cubo de %d", valor);
printf(" é:");
v = valor * valor * valor ;
printf("valor = %d", v);

}