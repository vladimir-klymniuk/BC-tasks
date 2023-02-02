#include <stdio.h>

int main() {
    int min, max, divisor, multiple;

    scanf("%d %d %d", &min, &max, &divisor);

    if ( divisor < 0 ) {
        divisor *= -1;
    }
    multiple = min - min % divisor;
    if ( multiple < min ) {
        multiple += divisor;
    }
    for ( ; multiple <= max; multiple += divisor ) {
        printf("%d\n", multiple);
    }

    return 0;
}
