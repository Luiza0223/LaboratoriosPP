/*
*Arquivo: mediaImpares.c
*Data de criação: 28/jan/2023
*Autor: Luiza Arruda Santos
*/

#include <stdio.h>
#include <stdlib.h>

int* criar_vetor(int n);
void preencher_vetor(int* vetor, int n, int s);
double calcular_media(int* vetor, int n);

int main() {
    int n, s;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);
    printf("Digite o numero inicial: ");
    scanf("%d", &s);

    int* vetor = criar_vetor(n);
    preencher_vetor(vetor, n, s);
    double media = calcular_media(vetor, n);

    printf("Penultimo elemento: %d\n", vetor[n - 2]);
    printf("Media: %.2lf\n", media);

    free(vetor);
    return 0;
}

int* criar_vetor(int n) {
    int* vetor = (int*) malloc(n * sizeof(int));
    return vetor;
}

void preencher_vetor(int* vetor, int n, int s) {
    if (s % 2 == 0) {
        s--;
    }

    for (int i = 0; i < n; i++) {
        vetor[i] = s;
        s += 2;
    }
}

double calcular_media(int* vetor, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vetor[i];
    }
    return (double) soma / n;
}