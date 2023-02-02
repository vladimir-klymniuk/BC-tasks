#include <stdio.h>

int main() {
    int speed, max;

    scanf("%d %d", &speed, &max);

    if ( speed > max ) {
        printf("violation\n");
    } else {
        printf("ok\n");
    }

    return 0;
}
