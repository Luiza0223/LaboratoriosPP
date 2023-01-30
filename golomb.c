/*
*Arquivo: golomb.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <stdlib.h>

int golomb(int n);

int main(void) {
    int a, b, i;
    double sum = 0;
    printf("Digite o primiero indice: ");
    scanf("%d", &a);
    printf("Digite o segundo indice: ");
    scanf("%d", &b);

    if (b < a) {
        int aux = a;
        a = b; 
        b = a;
    }

    int *arr = (int*) malloc((b + 1) * sizeof(int));

    for (i = 0; i <= b; i++) {
        arr[i] = golomb(i);
    }

    printf("Primeiro elemento %d: %d\n", a, arr[a]);
    printf("Ultimo elemento %d: %d\n", b, arr[b]);

    for (i = a; i <= b; i++) {
        sum += arr[i];
    }
    printf("Media: %.3f\n", sum / (b - a + 1));

    free(arr);
    return 0;
}

int golomb(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 1 + golomb(n - golomb(golomb(n - 1) - 1));
    }
}