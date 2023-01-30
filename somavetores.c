/*
*Arquivo: somavetores.c
*Data de criação: 28/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool soma(int *v1, int N1, int *v2, int N2, int *resultado);


int main() {
    int N, M;
    printf("Insira o numero de elementos do primeiro vetor: ");
    scanf("%d", &N);
    int *v1 = (int*) malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        v1[i] = (i * 2) + 1;
    }

    printf("Insira o numero de elementos do segundo vetor: ");
    scanf("%d", &M);
    int *v2 = (int*) malloc(M * sizeof(int));
    for (int i = 0; i < M; i++) {
        v2[i] = i * 4;
    }

    int *resultado = (int*) malloc(N * sizeof(int));
    if (soma(v1, N, v2, M, resultado)) {
        for (int i = 0; i < N; i++) {
            printf("%d ", resultado[i]);
        }
    } else {
        printf("Os vetores nao possuem o mesmo tamanho.");
    }
    free(v1);
    free(v2);
    free(resultado);
    return 0;
}

bool soma(int *v1, int N1, int *v2, int N2, int *resultado) {
    if (N1 != N2) return false;
    for (int i = 0; i < N1; i++) {
        resultado[i] = v1[i] + v2[i];
    }
    return true;
}