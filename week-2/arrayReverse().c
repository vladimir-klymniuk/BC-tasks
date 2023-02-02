void arrayReverse(int array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int temp = array[i];

        array[i] = array[j];
        array[j] = temp;
    }
}

// almost win
// Написать функцию:
// void arrayReverse(int array[], int size)
// Использование дополнительного массива не разрешается.