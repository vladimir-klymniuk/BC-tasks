#include <stdio.h>

int main() {
    int max;
    int multiple;

    scanf("%d", &max);

    multiple = max - max % 3;
    if ( multiple > max ) {
        multiple -= 3;
    }
    for ( int i = 0; i < multiple; i += 3 ) {
        printf("%d ", i);
    }
    printf("%d\n", multiple);

    return 0;
}
