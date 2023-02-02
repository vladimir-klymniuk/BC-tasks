void strUpperCase(char str[]) {
    for ( int index = 0; str[index] != '\0'; index++ ) {
        if ( str[index] >= 97 ) {
            str[index] -= 32;
        }
    }
}


