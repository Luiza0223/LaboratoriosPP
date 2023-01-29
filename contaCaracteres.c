/*
*Arquivo: contaCaracteres.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    int letters = 0, digits = 0, others = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]s", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        } else {
            others++;
        }
    }

    printf("letras: %d ", letters);
    printf(" digitos: %d ", digits);
    printf(" outros: %d", others);

    return 0;
}
