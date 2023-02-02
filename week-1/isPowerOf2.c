#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if ( (number & (number - 1)) == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
