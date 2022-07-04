#include <stdio.h>
#include <stdlib.h>
int main(){
float a, b;
printf("Digite dois numeros inteiros \n");
scanf("%f %f", &a, &b);
if (b != 0)
printf("A divisao de %f / %f = %f", a,b,a/b);
else
printf("Impossivel dividir");
return 0;
}