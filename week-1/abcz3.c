#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ( a + b > c ) {
        printf("alpha\n");
    } else if ( a < b - c ) {
        printf("bravo\n");
    } else if ( b % c == 0 ) {
        printf("charlie\n");
    } else {
        printf("zulu\n");
    }

    return 0;
}

/* epic win */