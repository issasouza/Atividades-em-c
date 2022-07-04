#include <stdio.h>
#include <stdlib.h>

int main(void)
{
printf("Qual o seu nome?\n");


char str[20];
gets(str);

printf("ola ");
printf("%s",str);
printf(", tenha um otimo dia de trabalho\n\a");


return 0;
}