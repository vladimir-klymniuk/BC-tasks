#include <stdio.h>

int main() {
    int max;

    scanf("%d", &max);

    if ( max < 0 ) {
        max *= -1;
    }

    for ( int i = 1; i < max; i++ ) {
        printf("%d ", i);
    }
    printf("%d\n", max);

    return 0;
}
