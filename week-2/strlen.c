#include <stdio.h>

int strLen(char str[], int size) {
    int length = 0;

    for ( ; length < size && str[length] != '\0'; length++ );
    return length;
}

int main() {
    int limit = 101;
    char string[limit];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");

    fscanf(in, "%s", string);
    fprintf(out, "%d\n", strLen(string, limit));
    fclose(in);
    fclose(out);

    return 0;
}

//В файле task.in дана строка длиной не более 100 символов и не содержащая whitespace-символов (пробелов и прочего).
//Прочитать строку в память и подсчитать ее длину.
//Результат вывести в task.out.
