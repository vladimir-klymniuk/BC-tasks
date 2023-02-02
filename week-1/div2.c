#include <stdio.h>

#define STEP 2

int main() {
    int min, max;

    scanf("%d %d", &min, &max);

    if ( min % STEP != 0 ) {
        min += 1;
    }
    for ( int i = min; i <= max; i += STEP ) {
        printf("%d\n", i);
    }

    return 0;
}
