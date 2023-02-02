#include <stdio.h>

int main() {
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if ( a <= b && b <= c && c <= d && d <= e ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
