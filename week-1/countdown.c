#include <stdio.h>

int main() {
    int minute;

    scanf("%d", &minute);

    for ( ; minute > 0; minute-- ) {
        printf("%d ", minute);
    }
    printf("0\n");

    return 0;
}
