/*
*Arquivo: diferencas.c
*Data de criação: 03/dez/2022
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>

void fill_difference_vector(int N, float A[], float B[]);

int main(){
    int N;
    printf("Digite quantos elementos deseja: ");
    scanf("%d", &N);
    float A[N], B[N-1];
    int i;
    for(i=0; i<N; i++){
        printf("Digite o %d elemento: ", i+1);
        scanf("%f", &A[i]);
    }
    fill_difference_vector(N, A, B);
    return 0;
}

void fill_difference_vector(int N, float A[], float B[]){
    int i;
    float min_diff = A[1] - A[0];
    float max_diff = A[1] - A[0];
    for(i=0; i<N-1; i++){
        B[i] = A[i+1] - A[i];
        printf("%0.1f ", B[i]);
        if(B[i] < min_diff)
            min_diff = B[i];
        if(B[i] > max_diff)
            max_diff = B[i];
    }
    printf("\n");
    printf("Min: %.1f\n", min_diff);
    printf("Max: %.1f\n", max_diff);
}