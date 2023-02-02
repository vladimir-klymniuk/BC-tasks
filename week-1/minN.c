#include <stdio.h>

int main() {
    int count, min, current;

    scanf("%d %d", &count, &min);

    for ( int i = 1; i < count; i++ ) {
        scanf("%d", &current);

        if ( min > current ) {
            min = current;
        }
    }
    printf("%d\n", min);

    return 0;
}
