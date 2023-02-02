#include <stdio.h>

#define LIMIT 101

void strRot13(FILE *out, char str[]) {
    for ( int i = 0, symbol = str[i]; str[i]; i++, symbol = str[i] ) {
        if ( symbol >= 'a' && symbol <= 'z' ) {
            if ( symbol > 'm' ) {
                str[i] -= 'n' - 'a';
            } else {
                str[i] += 'n' - 'a';
            }
        } else if ( symbol >= 'A' && symbol <= 'Z' ) {
            if ( symbol > 'M' ) {
                str[i] -= 'N' - 'A';
            } else {
                str[i] += 'N' - 'A';
            }
        }
        fprintf(out, "%c", symbol);
    }
}

int main() {
    char string[LIMIT];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    fscanf(in, "%s", string);
    strRot13(out, string);

    return 0;
}