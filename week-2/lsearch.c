#include <stdio.h>

int lsearch(FILE *in, int size, int needle) {
    int array[size];

    for ( int i = 0; i < size && fscanf(in, "%d", &array[i]) == 1; i++ ) {
        if ( needle == array[i] ) {
            return i;
        }
    }
    return -1;
}

int main() {
    int needle;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    fscanf(in, "%d", &needle);
    fprintf(out, "%d\n", lsearch(in, 100, needle));

    return 0;
}

// В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
// Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.