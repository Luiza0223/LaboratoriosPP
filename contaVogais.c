/*
*Arquivo: contaVogais.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>

int main(){
    char vogais[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    
    printf("Digite uma palavra: ");
    char plv[1024];
    int c = 0;
    fgets(plv, 1024, stdin);
    for(int i=0; plv[i] != '\0'; i++){
        for(int j = 0; j < 10; j++)
            if (plv[i] == vogais[j])
                c++;
        //if(plv[i] == 'A'|| plv[i] == 'E'|| plv[i] == 'I'|| plv[i] == 'O'||plv[i] == 'U'||plv[i] == 'a'
        //||plv[i] == 'e'|| plv[i] == 'i'||plv[i] == 'o'||plv[i] == 'u')
           // c++;
    }
    printf("O número de vogais é: %d", c);
    return 0;
}