#include <stdio.h>

void scanArray(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void printArray(FILE *out, int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    int size = 10;
    int array[size];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    scanArray(in, array, size);
    printArray(out, array, size);

    return 0;
}

// Считать в массив последовательность чисел длиной 10 из файла task.in.
// Записать его через пробел в файл task.out.