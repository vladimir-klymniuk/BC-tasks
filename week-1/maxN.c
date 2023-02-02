#include <stdio.h>

int main() {
    int count, max, current;

    scanf("%d %d", &count, &max);

    for ( int i = 1; i < count; i++ ) {
        scanf("%d", &current);

        if ( max < current ) {
            max = current;
        }
    }
    printf("%d\n", max);

    return 0;
}
