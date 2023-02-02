#include <stdio.h>

#define MAX 100

int main() {
    int value;
    int sequenceLen = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    for ( ; sequenceLen < MAX && fscanf(in, "%d", &value) == 1; sequenceLen++ );
    fprintf(out, "%d\n", sequenceLen);

    return 0;
}

// Считать из файла task.in последовательность чисел размером не более 100 элементов.
// Посчитать длину последовательности и вывести ее в task.out.