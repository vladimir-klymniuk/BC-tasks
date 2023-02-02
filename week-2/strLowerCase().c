void strLowerCase(char str[]) {
    for ( ; *str != '\0'; str++ ) {
        if ( *str > 64 && *str < 91 ) {
            *str += 32;
        }
    }
}


