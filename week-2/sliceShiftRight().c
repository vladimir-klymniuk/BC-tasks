void sliceShiftRight(int array[], int start, int end) {
    if ( end > start ) {
        int temp = array[end];

        for ( int i = end; i > start; i-- ) {
            array[i] = array[i-1];
        }
        array[start] = temp;
    }
}

// epic win
// Написать функцию:
// void sliceShiftRight(int array[], int start, int end)
// Осуществить циклический сдвиг части массива на один элемент вправо от start до end включительно.