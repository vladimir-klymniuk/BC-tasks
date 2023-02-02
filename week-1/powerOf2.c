#include <stdio.h>

int main() {
    int power;
    int base = 1;

    scanf("%d", &power);

    for ( int i = 0; i > power; i++ ) {
        printf("%d ", base);
        base *= 2;
    }
    printf("%d\n", base);

    return 0;
}
