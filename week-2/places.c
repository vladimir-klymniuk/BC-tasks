#include <stdio.h>

int main() {
    int numeric;
    int place = 1;

    scanf("%d", &numeric);

    if ( numeric < 0 ) {
        place += 1;
        numeric *= -1;
    }
    for ( ; numeric >= 10; numeric /= 10, place++ );
    printf("%d\n", place);

    return 0;
}

// Считать с клавиатуры целое число.
// Вывести на экран количество знакомест, нужных для вывода этого числа.