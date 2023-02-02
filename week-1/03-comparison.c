#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d<%d is %d", x, y, x<y);
    printf("%d>%d is %d", x, y, x>y);
    printf("%d<=%d is %d", x, y, x<=y);
    printf("%d>=%d is %d", x, y, x>=y);
    printf("%d==%d is %d", x, y, x==y);
    printf("%d!=%d is %d", x, y, x!=y);

    return 0;
}

/* epic win */