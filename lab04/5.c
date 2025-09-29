#include <stdio.h>
#include <string.h>

void trim(char source[], char target[]) {
    int start = 0;
    int end = strlen(source) - 1;

    // kezdő index keresése, ahol nem szóköz van
    while (source[start] == ' ' || source[start] == '\t' || source[start] == '\n') {
        start++;
    }

    // vég index keresése, ahol nem szóköz van
    while (end >= start && (source[end] == ' ' || source[end] == '\t' || source[end] == '\n')) {
        end--;
    }

    // másolás
    int j = 0;
    for (int i = start; i <= end; i++) {
        target[j++] = source[i];
    }
    target[j] = '\0';
}

int main() {
    char forras[] = "   helló, mizu?   ";
    char cel[50];

    trim(forras, cel);

    printf("Eredeti sztring: '%s'\n", forras);
    printf("Levágott sztring: '%s'\n", cel);

    return 0;
}