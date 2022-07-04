#include <stdio.h>
#include<stdlib.h>

int main()

{

int hora1, hora2, min1, min2;
int valorHora, valorMin;
printf("Digite a hora e depois os minutos do inicio do jogo\n");
scanf("%d %d", &hora1, &min1);
printf("Digite a hora e depois os minutos do termino do jogo\n");
scanf("%d %d", &hora2, &min2);

if (hora2 >= hora1) {

if (min2 >= min1) {

valorHora = hora2 - hora1;
valorMin = min2 - min1;
printf("O jogo durou %d hora(s) e %d minuto(s)", valorHora, valorMin);

}

else {
valorHora = hora2 - hora1 - 1;
valorMin = min2 + (60 - min1);
printf("O jogo durou %d hora(s) e %d minuto(s)", valorHora, valorMin);

}

}

else {
if (min2 >= min1) {
valorHora = 12 + hora2;
valorMin = min2 - min1;
printf("O jogo durou %d hora(s) e %d minuto(s)", valorHora, valorMin);

}

else {
valorHora = 12 + hora2 - 1;
valorMin = min2 + (60 - min1);
printf("O jogo durou %d hora(s) e %d minuto(s)", valorHora, valorMin);

}

}

return 0;

}