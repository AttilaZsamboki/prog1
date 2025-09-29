#include <stdio.h>

// Függvény a kocka felületének és térfogatának számítására
void kocka_adatok(double oldalhossz, double *felulet, double *terfogat) {
    *felulet = 6 * oldalhossz * oldalhossz;
    *terfogat = oldalhossz * oldalhossz * oldalhossz;
}

int main() {
    double oldal = 2.7; // Kocka oldalhossza
    double felulet, terfogat;
    
    // Az adatokat a függvénnyel számoltatjuk ki
    kocka_adatok(oldal, &felulet, &terfogat);
    
    // Eredmények kiíratása magyar nyelven
    printf("A kocka felülete: %.2f\n", felulet);
    printf("A kocka térfogata: %.2f\n", terfogat);
    return 0;
}