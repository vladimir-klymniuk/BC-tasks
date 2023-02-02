#include <stdio.h>

int main() {
    int length, min, number;

    scanf("%d %d", &length, &min);

    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &number);
        if ( number < min ) {
            printf("no\n");
            return 0;
        } else {
            min = number;
        }
    }
    printf("yes\n");

    return 0;
}
