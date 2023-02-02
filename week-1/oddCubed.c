#include <stdio.h>

int main() {
    int min, max;
    int cube;

    scanf("%d %d", &min, &max);

    if ( max % 2 == 0 ) {
        max -= 1;
    }

    for ( int i = min; i < max; i++ ) {
        if ( i % 2 != 0 ) {
            cube = i * i * i;
            printf("%d ", cube);
        }
    }
    cube = max * max * max;
    printf("%d\n", cube);

    return 0;
}
