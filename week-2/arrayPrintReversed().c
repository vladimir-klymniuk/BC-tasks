void arrayPrintReversed(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}

// epic win
// Написать функцию:
// void arrayPrintReversed(int array[], int size)
// Распечатать массив на экран в строку через пробел в обратном порядке.