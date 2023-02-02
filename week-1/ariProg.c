#include <stdio.h>

int main() {
    int number, step, total;

    scanf("%d %d %d", &number, &step, &total);

    for ( ; total > 1; total-- ) {
        printf("%d ", number);
        number += step;
    }
    printf("%d\n", number);

    return 0;
}
