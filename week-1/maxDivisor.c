#include <stdio.h>

int main() {
    int dividend, divisor;

    scanf("%d", &dividend);

    for ( divisor = dividend / 2; divisor > 1; divisor-- ) {
        if ( dividend % divisor == 0 ) {
            printf("%d\n", divisor);
            return 0;
        }
    }
    printf("0\n");

    return 0;
}
