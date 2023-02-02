int arrayMin(int array[], int size) {
    int min = array[0];

    for ( int i = 1; i < size; i++ ) {
        if ( array[i] < min ) {
            min = array[i];
        }
    }
    return min;
}

// epic win
// Написать функцию:
// int arrayMin(int array[], int size)
// Вернуть значение минимального элемента в массиве.