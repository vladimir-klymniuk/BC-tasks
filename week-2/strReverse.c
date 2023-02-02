#include <stdio.h>

#define LIMIT 101

int strLen(char str[]) {
    int len = 0;

    for ( ; len < LIMIT && str[len] != 0; len++ );
    return len;
}

void strReverse(FILE *out, char str[], int size) {
    for ( int i = size - 1; i >= 0; i-- ) {
        fprintf(out, "%c", str[i]);
    }
    fprintf(out, "\n");
}

int main() {
    char string[LIMIT];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    fscanf(in, "%s", string);
    strReverse(out, string, strLen(string));

    return 0;
}

// В файле task.in дана строка длиной не более 100 символов.
// Прочитать строку в память и произвести ее реверс.
// Результат вывести в task.out.