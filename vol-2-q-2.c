#include <stdio.h>
#include <math.h>
//. Pablo tem 1,50 m e cresce 2 centímetros por ano, enquanto Edson tem 1,10 m e cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários para que Edson seja maior que Pablo
main() 
{
  float pablo = 1.5, edson = 1.1;
  int anos = 0;

  while(pablo >= edson) 
 {
    pablo += 0.02;
    edson += 0.03;
    anos ++;
  }
 printf("são necessários %d anos.", anos);
}