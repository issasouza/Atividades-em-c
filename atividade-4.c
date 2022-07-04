#include <stdio.h>


{
int idade, ano, data:
char nome[30];
 
printf("ola, qual o seu nome?\n"); 
fflush(stdin);
gets(nome);
printf("\nQuantos anos voce tem?:");
scanf("%d", &idade);
printf("\nEm que ano você nasceu?:");
scanf("%d", &data);
ano = 2020 - data;
printf("\n\n%s, em 2020 voce tinha %d anos")
return 0;
}