#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    for ( char letter; fscanf(in, "%c", &letter) != -1; ) {
        if ( letter <= 90 ) {
            letter += 32;
        }
        fprintf(out, "%c", letter);
    }
    fprintf(out, "\n");

    return 0;
}

// В файле task.in дана последовательность символов.
// Перевести все буквы в верхний регистр и вывести результирующую последовательность в файл task.out