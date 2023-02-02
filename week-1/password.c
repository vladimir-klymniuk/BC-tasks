#include <stdio.h>

int main() {
    int password;

    for ( int i = 0; i < 5; i++ ) {
        scanf("%d", &password);

        if ( password == 1488 ) {
            printf("accepted\n");
            return 0;
        }
        printf("incorrect password\n");
    }
    printf("denied\n");

    return 0;
}
