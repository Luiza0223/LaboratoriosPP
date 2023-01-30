/*
*Arquivo: aproxpi.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos
*/

#include <stdio.h>
#include <math.h>

int main() {
    double pi, soma = 0;
    int i, j, a;

    printf("Digite o numero de iterações para calcular o pi: ");
    scanf("%d", &j);

    a= j-1;

    if(j == 0){
        printf("O valor aproximado de pi é: 4");
    }
    
    if(j >= 0){
        for (i = 0; i < a; i++) {
            soma = soma + pow(-1,i)/(2*i + 1);
        }

        pi = 4*soma;
        printf("O valor aproximado de pi é:\n %.6lf\n", pi);
    }

    return(0);
}