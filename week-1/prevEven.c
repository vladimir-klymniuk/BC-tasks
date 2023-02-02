#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if ( number % 2 != 0 ) {
        number -= 1;
    }
    printf("%d\n", number);

    return 0;
}
