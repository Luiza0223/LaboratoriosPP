/*
*Arquivo: reverteString.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <string.h>

int main(){
    char plv[1024];

    printf("Digite uma frase: ");
    fgets(plv, 1024, stdin);
    int l = strlen(plv) - 1;
    char inv;

    for(int i = l - 1; i >= 0 ; i--){
        inv = plv[i];
        if(plv[i] >= 97 && plv[i] <= 122){
            inv = plv[i] - 32;
        }
        printf("%c", inv);
    }

    return 0;
}