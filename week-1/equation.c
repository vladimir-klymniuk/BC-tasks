#include <stdio.h>

int main() {
    int discriminant;

    scanf("%d", &discriminant);

    if ( discriminant < 0 ) {
        printf("0\n");
    } else if ( discriminant == 0 ) {
        printf("1\n");
    } else {
        printf("2\n");
    }

    return 0;
}
