#include <stdio.h>

int main() {
    int max, divisor;
    int multiple;

    scanf("%d %d", &max, &divisor);

    multiple = max - max % divisor;
    if ( multiple > max ) {
        multiple -= divisor;
    }
    for ( int i = 0; i < multiple; i += divisor ) {
        printf("%d ", i);
    }
    printf("%d\n", multiple);

    return 0;
}
