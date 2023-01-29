/*
*Arquivo: cosTaylor.c
*Data de criação: 11/nov/2022
*Autor: Luiza Arruda Santos 
*Difícil 
*/

#include <stdio.h>
#include <math.h>

static long fat = 1; 

int main(void) {
  
  int n, i;
  double x, z = 0.0;

  printf("Digite dois numeros para calcular o cos(x): ");
  scanf("%d %lf", &n, &x);

  x = x * 3.141;

  for (i = 0; i < n; i++ ){
    z = z + (( pow(-1.0 , i) * (pow(x, (2.0*i))) / fat ));
    fat = fat * ((2*i+1) * (2*i+2)); 
  }

  printf("\ncos(x) = %5f\n", z );

  return 0;
}