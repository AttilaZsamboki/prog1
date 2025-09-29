#include <stdio.h>

void kocka(double a, double *terfogat, double *felulet) {
  *felulet = a * a * 6;
  *terfogat = a * a * a;
}

int main(void) {
  double terfogat, felulet;
  kocka(2.7, &terfogat, &felulet);
  return 0;
}
