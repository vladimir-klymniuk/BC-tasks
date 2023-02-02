#include <stdio.h>

int main() {
    int size;
    int value = 1;

    scanf("%d", &size);

    for ( int row = 1; row <= size; row++, value++ ) {
        for ( int column = 1; column < size; column++, value++ ) {
            printf("%d ", value);
        }

        printf("%d\n", value);
    }

    return 0;
}
