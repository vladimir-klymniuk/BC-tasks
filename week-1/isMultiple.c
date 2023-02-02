#include <stdio.h>

int main() {
    int dividend, divisor;

    scanf("%d %d", &dividend, &divisor);

    if ( dividend % divisor == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}

/* epic win */