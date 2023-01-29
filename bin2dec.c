/*
*Arquivo: bin2dec.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <math.h>

int main(){
    char bin[64];
    printf("Digite um numero binario: ");
    fgets(bin, 64, stdin);

    int len = strlen(bin) - 1;
    int dec = 0;

    for(int i = 0; i < len; i++){
        if(bin[i] == 49)
            dec = dec + (1 * pow(2, len - i));
        else if(bin[i] == 48)
            dec = dec + 0;
    }
    printf("Em decimal sera: %d", dec/2);

    return 0; 
}