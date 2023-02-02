int arraySum(int array[], int size) {
    int sum = array[0];

    for ( int i = 0; i < size; i++ ) {
        sum += array[i];
    }
    return sum;
}

// epic win
// Написать функцию:
// int arraySum(int array[], int size)
// Вернуть сумму элементов массива.
// size > 0