#include <stdio.h>

int main() {
    int plain1, encrypted1, plain2, encrypted2, length;
    int keyA, keyB, plain, cipher;

    scanf("%d %d\n%d %d\n%d", &plain1, &encrypted1, &plain2, &encrypted2, &length);

    keyA = (encrypted2 - encrypted1) / (plain2 - plain1);
    keyB = encrypted1 - plain1 * keyA;
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &plain);
        cipher = (plain - keyB) / keyA;
        printf("%d ", cipher);
    }
    scanf("%d", &plain);
    cipher = (plain - keyB) / keyA;
    printf("%d\n", cipher);

    return 0;
}
