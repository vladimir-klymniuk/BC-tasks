void arrayShiftRight(int array[], int size) {
    int last = size - 1;
    int tmp = array[last];

    for ( int i = last; i > 0; i-- ) {
        array[i] = array[i-1];
    }
    array[0] = tmp;
}

// almost win
// Написать функцию:
// void arrayShiftRight(int array[], int size)
// Реализовать циклический сдвиг массива на 1 элемент вправо.
// Использование дополнительного массива не разрешается.