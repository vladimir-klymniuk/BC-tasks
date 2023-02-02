#include <stdio.h>

int main() {
    int x;
    int divisor = 1;

    scanf("%d", &x);

    for ( int i = 1; i < x; i++ ) {
        if ( x % i == 0 ) {
            divisor += 1;
        }
    }
    printf("%d\n", divisor);

    return 0;
}
