#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int ano(int a, int d)
{int ano;
ano = a - d;
return ano;
}
int main()

{
	int b, c, resultado;
	printf("qual ano estamos:");
	scanf("%d",&b);
	printf("qual ano voce nasceu:");
	scanf("%d",&c);
	resultado = ano( b , c );
	printf("o resultado %d", resultado);
}

