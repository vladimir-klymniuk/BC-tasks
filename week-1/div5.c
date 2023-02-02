#include <stdio.h>

#define STEP 5

int main() {
    int min, max;
    int base;

    scanf("%d %d", &min, &max);

    base = min - min % STEP;
    if ( base < min ) {
        base += STEP;
    }
    for ( ; base <= max; base += STEP ) {
        printf("%d\n", base);
    }

    return 0;
}
