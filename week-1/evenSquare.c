#include <stdio.h>

int main() {
    int min, max;

    scanf("%d %d", &min, &max);

    if ( max % 2 != 0 ) {
        max -= 1;
    }

    for ( int i = min; i < max; i++ ) {
        if ( i % 2 == 0 ) {
            printf("%d ", i*i);
        }
    }
    printf("%d\n", max*max);

    return 0;
}
