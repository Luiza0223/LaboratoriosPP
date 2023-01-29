/*
*Arquivo: diferencas.c
*Data de criação: 03/dez/2022
*Autor: Luiza Arruda Santos 
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

sum_of_squares(int n);
bool is_prime(int n);
bool is_happy(int n);


int main() {
    int num, i;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = num; i >= 2; i--) {
        if (is_prime(i) && is_happy(i)) {
            printf("O maior happy number primo e: %d\n", i);
            break;
        }
    }
    if (i < 2) {
        printf("Nao existe um happy number primo\n");
    }
    return 0;
}


int sum_of_squares(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += pow(digit, 2);
        n /= 10;
    }
    return sum;
}


bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
bool is_happy(int n) {
    int slow, fast;
    slow = fast = n;
    do {
        slow = sum_of_squares(slow);
        fast = sum_of_squares(sum_of_squares(fast));
    } while (slow != fast);
    return (slow == 1);
}


