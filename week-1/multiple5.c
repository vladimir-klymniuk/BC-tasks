#include <stdio.h>

int main() {
    int max;
    int multiple;

    scanf("%d", &max);

    multiple = max - max % 5;
    if ( multiple > max ) {
        multiple -= 5;
    }
    for ( int i = 0; i < multiple; i += 5 ) {
        printf("%d ", i);
    }
    printf("%d\n", multiple);

    return 0;
}
