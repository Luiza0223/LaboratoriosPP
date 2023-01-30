/*
*Arquivo: raizes2grau.c
*Data de criação: 28/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2);

int main(){
    float a, b, c, x1, x2, quantR;


    printf("Entre com o valor de A: ");
    scanf("%f", &a);
    fflush(stdin);

    if (a != 0){
        printf("\nEntre com o valor de B: ");
        scanf("%f", &b);
        fflush(stdin);

        printf("\nEntre com o valor de C: ");
        scanf("%f", &c);
        fflush(stdin);

        quantR = raizes(a, b, c, &x1, &x2);

        if (quantR == 0){
            printf("\nN. Raizes: 0");
        }
        else if (quantR == 1){
            printf("\nN. Raizes: 1\nX1 = %0.2f", x1);
        }
        else if (quantR == 2, x2>x1){
            printf("\nN. Raizes: 2\nX1 = %0.2f\nX2 = %0.2f", x1, x2);
        }
        else if (quantR == 2, x1>x2){
            printf("\nN. Raizes: 2\nX1 = %0.2f\nX2 = %0.2f", x2, x1);
        }
    }
    else{
        printf("\nOpcao invalida!");
    }

    return 0;
}

int raizes(float A, float B, float C, float *X1, float *X2)
{
    float delta, quantR;

    delta = (B * B) - (4 * A * C);

    if (delta < 0){
        return quantR = 0;
    }
    else if (delta == 0){
        *X1 = ((-B) + sqrt(delta)) / (2 * A);
        return quantR = 1;
    }
    else if (delta >= 0){
        *X1 = ((-B) + sqrt(delta)) / (2 * A);
        *X2 = ((-B) - sqrt(delta)) / (2 * A);
        return quantR = 2;
    }
}