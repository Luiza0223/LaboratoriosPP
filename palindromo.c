/*
*Arquivo: palindrono.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <ctype.h>
#include <string.h>

int main() {
    char phrase[100];
    int i, len;
    int flag = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]s", phrase);
    len = strlen(phrase);

    for (i = 0; i < len; i++) {
        phrase[i] = tolower(phrase[i]);
        if (!isalnum(phrase[i])) {
            for (int j = i; j < len; j++) {
                phrase[j] = phrase[j + 1];
            }
            len--;
            i--;
        }
    }

    for (i = 0; i < len/2; i++) {
        if (phrase[i] != phrase[len-i-1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("Palindromo: Falso\n");
    } else {
        printf("Palindromo: Verdadeiro\n");
    }

    return 0;
}
