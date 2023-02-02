#include <stdio.h>

int main() {
    int size;
    int count;

    scanf("%d", &size);

    for ( int column = size; column >= 1; column-- ) {
        count = size * (column - 1) + 1;
        for ( int row = 1; row < size; row++, count++ ) {
            printf("%d ", count);
        }
        printf("%d\n", count);
    }

    return 0;
}
