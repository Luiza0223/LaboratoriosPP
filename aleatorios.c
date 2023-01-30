/*
*Arquivo: aleatorios.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, i;
    float sum = 0;
    int min = 0x7fffffff, max = 0x80000000; 
    
    printf("Digite o numero de elementos da lista: ");
    scanf("%d", &N);
    
    int a[N];
    srand(N);
    for (i = 0; i <= N-1; i++) {
        a[i] = rand() % N ;

        sum += a[i];
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    
    printf("Minimo: %d\n", min);
    printf("Maximo: %d\n", max);
    printf("Media: %.2f\n", sum/N);
    
    return 0;
}

