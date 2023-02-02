#include <stdio.h>

int main() {
    int x, y;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    fscanf(in, "%d %d", &x, &y);
    fprintf(out, "%d\n", x+y);

    return 0;
}

// Считать два числа из файла task.in.
// Записать их сумму в файл task.out.