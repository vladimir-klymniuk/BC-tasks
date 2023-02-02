#include <stdio.h>

int main() {
    int number, minutes;

    scanf("%d %d", &number, &minutes);

    if ( number == 101 || number == 102 || number == 103 || number == 104 || number == 112 ) {
        printf("0$\n");
    } else if ( number >= 100 && number <= 999 ) {
        printf("%d$\n", minutes*40);
    } else if ( number >= 1000000 && number <= 9999999 ) {
        printf("%d$\n", minutes);
    } else {
        printf("-1\n");
    }

    return 0;
}
