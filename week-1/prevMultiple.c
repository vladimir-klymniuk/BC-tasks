#include <stdio.h>

int main() {
    int dividend, divisor;
    int multiple;

    scanf("%d %d", &dividend, &divisor);

    multiple = dividend - dividend % divisor;
    if ( multiple > max ) {
        multiple -= divisor;
    }
    printf("%d\n", multiple);

    return 0;
}
