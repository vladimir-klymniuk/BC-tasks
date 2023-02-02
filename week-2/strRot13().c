void strRot13(char str[]) {
    for ( int i = 0, symbol = str[i]; str[i]; i++, symbol = str[i] ) {
        if ( symbol >= 'a' && symbol <= 'z' ) {
            if ( symbol > 'm' ) {
                str[i] -= 'n' - 'a';
            } else {
                str[i] += 'n' - 'a';
            }
        } else if ( symbol >= 'A' && symbol <= 'Z' ) {
            if ( symbol > 'M' ) {
                str[i] -= 'N' - 'A';
            } else {
                str[i] += 'N' - 'A';
            }
        }
    }
}

// Написать функцию:
// void strRot13(char str[])
// Зашифровать строку по алгоритму ROT13