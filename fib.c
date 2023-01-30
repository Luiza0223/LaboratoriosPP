/*
*Arquivo: fib.c
*Data de criação: 24/jan/2023
*Autor: Luiza Arruda Santos
*/

#include <stdio.h>

int main() {
    
    long int a,b,c;
    int n,cont;

    printf("Digite um número para saber seu correspondente na sequência de Fibonacci:\n");
    scanf("%d", &n);

    if (n == 0) 
        printf("0");
    if (n == 1 || n==2) 
        printf("1");
    else {
        a = 1;
        b = 1;
        cont = 2;
    
    while(cont+1 <= n) {
        c = a + b;
        a = b;
        b = c;
        cont++;
    }
    printf("%d", c);
  }

  return 0 ;
}
