int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

// epic win
// Написать функцию, которая находит наибольший общий делитель.
// int gcd(int a, int b)
// Передаваемые значения больше нуля.