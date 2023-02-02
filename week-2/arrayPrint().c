void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < size; i++ ) {
        printf(out, "%d ", array[i]);
    }
    printf(out, "%d\n", array[last]);
}

// epic win
// void arrayPrint(FILE *out, int array[], int size)
// Функция должна вывести элементы массива через пробел, завершив вывод символом перевода строки.