int arraySearch(int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

// epic win
//Написать функцию, возвращающую индекс искомого числа в массиве либо -1 в случае, если число в массиве не содержится.
//int arraySearch(int array[], int size, int needle)