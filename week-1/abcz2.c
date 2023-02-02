#include <stdio.h>

int main() {
    int number;
    int isZulu = 1;

    scanf("%d", &a);

    if ( number % 2 == 0 ) {
        printf("alpha\n");
        isZulu = 0;
    }
    if ( number % 3 == 0 ) {
        printf("bravo\n");
        isZulu = 0;
    }
    if ( number % 5 == 0 ) {
        printf("charlie\n");
        isZulu = 0;
    }
    if ( isZulu ) {
        printf("zulu\n");
    }

    return 0;
}

/* epic win */