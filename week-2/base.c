#include <stdio.h>

int main() {
    int x, base;
    int max = 1;

    scanf("%d %d", &x, &base);

    for ( int limit = x / base; max <= limit; max *= base );

    for ( ; max > 0; max /= base ) {
        printf("%d", x/max);
        x %= max;
    }
    printf("\n");

    return 0;
}

// Считать с клавиатуры целое неотрицательное число в десятичной системе счисления и основание новой системы счисления (целое число от 2 до 10).
// Вывести в консоль число, записанное в новой системе счисления.
// Задача решается без массивов.
