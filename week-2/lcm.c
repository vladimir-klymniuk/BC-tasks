#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int a, b;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    fscanf(in, "%d %d", &a, &b);
    fprintf(out, "%d\n", lcm(a, b));

    return 0;
}

// В файле task.in даны два целых положительных числа.
// Записать в файл task.out наименьшее общее кратное этих чисел.