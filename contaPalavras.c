/*
*Arquivo: contaPalavras.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <string.h>

int main() {
    char phrase[100];
    int i, len, words = 1;

    printf("Digite uma frase: ");
    scanf("%[^\n]s", phrase);
    len = strlen(phrase);

    for (i = 0; i < len; i++) {
        if (phrase[i] == ' ') {
            words++;
        }
    }

    printf("Numero de palavras: %d\n", words);
    return 0;
}
