#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int meses(int mes_atual)
{int meses;
meses = mes_atual;
return meses;
}
int main()

{
	int b, c, resultado, ano;
	printf("em que mes estamos:");
	scanf("%d",&b);
	ano = 12;
	resultado = ano - meses( b);
	printf("o resultado %d", resultado);
}

