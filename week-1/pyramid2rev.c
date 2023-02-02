#include <stdio.h>

int main() {
    int total;

    scanf("%d", &total);

    for ( int row = total, counter = total * total / 2 + total / 2 + total % 2; row >= 1; row-- ) {
        counter -= row - 1;
        for ( int col = 1; col < row; col++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter -= row;
    }

    return 0;
}
