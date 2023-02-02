#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if ( a > b && b > 0 ) {
        printf("alpha\n");
    } else if ( a < 0 && b == 0 ) {
        printf("bravo\n");
    } else if ( a == 0 || b == 0 ) {
        printf("charlie\n");
    } else {
        printf("zulu\n");
    }

    return 0;
}

/* epic win */