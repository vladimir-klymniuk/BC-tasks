#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d AND %d is %d", a, b, a&&b);
    printf("%d OR %d is %d", a, b, a||b);

    return 0;
}

/* epic win */