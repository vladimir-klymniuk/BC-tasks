#include <stdio.h>

int main() {
    int amoebas, hours;

    scanf("%d %d", &amoebas, &hours);

    for ( int i = 1; i <= hours; i++ ) {
        amoebas *= 2;
        printf("%dh => %d amoeba(s)\n", i, amoebas);
    }

    return 0;
}
