#include <stdio.h>

// Függvény a keresett szám indexének megtalálására
int keres(int tomb[], int meret, int szam) {
    for (int i = 0; i < meret; i++) {
        if (tomb[i] == szam) {
            return i; // Visszatérés a megtalált indexel
        }
    }
    return -1; // Ha nem található meg
}

int main() {
    int tomb[10] = {5, 3, 9, 1, 7, 3, 4, 3, 8, 2}; // Már létrehozott tömb
    int szam = 3; // Keresendő szám
    int index = keres(tomb, 10, szam); // Függvényhívás

    if (index != -1) {
        printf("A keresett %d szám indexe: %d\n", szam, index);
    } else {
        printf("A keresett %d szám nem található a tömbben.\n", szam);
    }

    return 0;
}