#include <stdio.h>

unsigned long long factorial(unsigned long long n) {
    if ( n <= 1 ) {
        return 1;
    }
    for ( int i = n - 1; i > 0; i-- ) {
        n *= i;
    }
    return n;
}

unsigned long long bci(unsigned long long n, unsigned long long k) {
    return factorial(n) / (factorial(k) * factorial(n-k));
}

int main() {
    int lines;

    scanf("%d", &lines);

    if ( lines > 20 ) {
        lines = 20;
    }

    printf("1\n");
    for ( unsigned long long rows = 1; rows <= lines; rows++ ) {
        printf("1 ");
        for ( unsigned long long cols = 1; cols < rows; cols++ ) {
            printf("%llu ", bci(rows, cols));
        }
        printf("1\n");
    }

    return 0;
}
