#include <stdio.h>

int main() {
    int size;

    scanf("%d", &size);

    for ( int row = 1; row <= size; row++ ) {
        for ( int column = 1; column < size; column++ ) {
            printf("%d ", column);
        }
        printf("%d\n", size);
    }

    return 0;
}

/* almost win */