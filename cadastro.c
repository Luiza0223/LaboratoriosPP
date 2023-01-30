/*
*Arquivo: cadastro.c
*Data de criação: 29/jan/2023
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <string.h>

struct date {
    int day;
    int month;
    int year;
};

struct length {
    int feet;
    int inches;
};

struct person {
    char name[100];
    struct date birthday;
    struct length height;
    float weight;
};

int main() {
    int n, i;
    printf("Numero de pessoas a serem registradas: ");
    scanf("%d", &n);

    struct person list[n];

    for (i = 0; i < n; i++) {
        printf("Nome da pessoa: ");
        scanf("%s", list[i].name);
        printf("Data de nascimento (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &list[i].birthday.day, &list[i].birthday.month, &list[i].birthday.year);
        printf("Altura em metros: ");
        scanf("%d.%d", &list[i].height.feet, &list[i].height.inches);
        printf("Peso em kg: ");
        scanf("%f", &list[i].weight);
    }

    for (i = 0; i < n; i++) {
    printf("\nLista de pessoas registradas\n");
        printf("%s;\t %02d/%02d/%04d;\t %dm%d;\t %.2fkg\n", list[i].name, list[i].birthday.day, list[i].birthday.month, list[i].birthday.year, list[i].height.feet, list[i].height.inches, list[i].weight);
    }

    return 0;
}

