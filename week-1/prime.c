#include <stdio.h>

int isPrime(int n) {
    for ( int i = 2; i < n; i++ ) {
        if ( n % i == 0 && i != n ) {
            return 0;
        }
    }
    if ( n <= 1 ) {
        return 0;
    }
    return 1;
}

int main() {
    int number;

    scanf("%d", &number);

    if ( number <= 0 ) {
        printf("-1\n");
    }

    for ( int i = 2, counter = 0; counter < number; i++ ) {
        if ( isPrime(i) ) {
            counter += 1;
        }
        if ( counter == number ) {
            printf("%d\n", i);
        }
    }

    return 0;
}
