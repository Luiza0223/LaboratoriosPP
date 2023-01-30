/*
*Arquivo: txtFibonacci.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long long int n, a[100];
    printf("Digite a quantidade de elementos: ");
    scanf("%llu", &n);
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < n; i++)
        a[i] = a[i-1] + a[i-2];
    printf("O ultimo numero da sequencia e %llu\n", a[n-1]);
    FILE *fptr;
    fptr = fopen("fibonacci.txt", "w");
    if (fptr == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    for (int i = 0; i < n; i++)
        fprintf(fptr, "%llu\n", a[i]);
    fclose(fptr);
    return 0;
}
