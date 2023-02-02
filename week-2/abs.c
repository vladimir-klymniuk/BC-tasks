#include <stdio.h>

void toAbs(FILE *in, FILE *out, int size) {
    int array[size];
    int last = size - 1;

    for ( int loaded = 0; loaded < size && fscanf(in, "%d", &array[loaded]) == 1; loaded++ );
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    int size;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    fscanf(in, "%d", &size);
    toAbs(in, out, size);

    return 0;
}

// В файле task.in дана длина последовательности чисел (число больше нуля) и сама последовательность.
// Прочитать последовательность в массив.
// Найти все отрицательные числа и заменить их положительными, равными по модулю.
// Результирующий массив вывести в task.out.