#include <stdio.h>

int main() {
    int min, max;

    scanf("%d %d", &min, &max);

    if ( max % 2 != 0 ) {
        max -= 1;
    }
    if ( min % 2 != 0 ) {
        min += 1;
    }
    for ( ; min < max; min += 2 ) {
        printf("%d ", min);
    }
    printf("%d\n", max);

    return 0;
}
