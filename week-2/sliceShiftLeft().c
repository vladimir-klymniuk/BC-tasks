void sliceShiftLeft(int array[], int start, int end) {
    if ( end > start ) {
        int temp = array[start];

        for ( int i = start; i < end; i++ ) {
            array[i] = array[i+1];
        }
        array[end] = temp;
    }
}

// epic win
// Написать функцию:
// void sliceShiftLeft(int array[], int start, int end)
// Осуществить циклический сдвиг части массива на один элемент влево от start до end включительно.