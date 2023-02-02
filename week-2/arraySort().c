void arraySort(int array[], int size) {
    for ( ; size > 1; size-- ) {
        for ( int i = 0; i < size - 1; i++ ) {
            if ( array[i] > array[i+1] ) {
                int tmp = array[i];

                array[i] = array[i+1];
                array[i+1] = tmp;
            }
        }
    }
}

// Написать функцию:
// void arraySort(int array[], int size)
// Отсортировать элементы в порядке неубывания.
// Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.