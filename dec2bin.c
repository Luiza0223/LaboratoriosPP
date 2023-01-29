/*
*Arquivo: dec2bin.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>

int main(){
    long long int dec;
    int binary[64];

    printf("Digite um numero decimal: ");
    scanf("%llu", &dec);

    int i = 0;
    while (dec > 0){
        binary[i] = dec%2;
        dec = dec/2;
        i++;
    }
    printf("Em binario sera: ");
    for(i = i -1; i >= 0; i--)
        printf("%d", binary[i]);

    return 0;
}