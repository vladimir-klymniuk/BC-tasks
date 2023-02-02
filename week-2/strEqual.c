#include <stdio.h>

#define LIMIT 101

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == 0 ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char string1[LIMIT];
    char string2[LIMIT];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    fscanf(in, "%100s %100s", string1, string2);
    fclose(in);
    if ( strEqual(string1, string2) ) {
        fprintf(out, "yes\n");
    } else {
        fprintf(out, "no\n");
    }

    return 0;
}


// В файле task.in заданы две строки длиной не более 100 символов каждая.
// Если строки равны, вывести в task.out слово "yes" - иначе вывести "no".