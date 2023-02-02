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
    int min, max, m, n;
    int divMN;

    scanf("%d %d %d %d", &min, &max, &m, &n);

    divMN = lcm(m, n);

    if ( min < 0 ) {
        min -= min % divMN;
    } else if ( min % divMN != 0 ) {
        min += divMN - min % divMN;
    }

    for ( int i = min; i <= max; i += divMN ) {
        printf("%d\n", i);
    }

    return 0;
}

// Считать с клавиатуры целые числа min, max, m, n, причём m и n положительные.
// Вывести на экран в столбик целые числа от min до max включительно, которые без остатка делятся как на m, так и на n.
// В указанном промежутке гарантируется хотя бы одно число, подлежащее выводу.