#include <stdio.h>

int main() {
    int total;
    int rows, cols;

    scanf("%d %d %d", &total, &rows, &cols);

    if ( rows < cols ) {
        rows = cols;
    }

    for ( int row = rows + 1; row <= total; row++ ) {
        for ( int column = cols + 1; column < row; column++ ) {
            printf("%d ", column);
        }
        printf("%d\n", row);
    }

    return 0;
}
