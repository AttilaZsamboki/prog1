#include <stdio.h>

int *keress(int tomb[], int szam, int meret) {
  int i;
  for (i = 0; i < meret; i++) {
    if (tomb[i] == szam) {
      return &tomb[i];
    }
  }

  return NULL;
}

int main(void) {
  int tomb[5] = {5, 4, 3, 2, 1};
  int *item = keress(tomb, 5, 5);
  if (item) {
    // a keresett elem memóriacíme minusz a tömb memóriacíme az elem indexét
    // eredményezi mivel a memóriában egymásután vannak tárolva az elemeke az
    // elsőtőlé kezdve ami a tömb egészének is a címe
    printf("[%d]=%d", *item, item - tomb);
  } else {
    printf("nincs talalat");
  }
  return 0;
}
