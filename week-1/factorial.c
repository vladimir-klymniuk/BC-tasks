#include <stdio.h>

int main() {
    int number;
    int factorial = 1;

    scanf("%d", &number);

    if ( number < 0 ) {
        factorial = -1;
    } else {
        for ( int i = 1; i <= number; i += 1 ) {
            factorial *= i;
        }
    }

    printf("%d\n", factorial);

    return 0;
}
