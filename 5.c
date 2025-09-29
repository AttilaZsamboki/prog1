#include <stdio.h>

void trim(char forras[], char cel[]) {
  int cel_hossz = 0;
  for (int i = 0; forras[i] != '\0'; i++) {
    // tudom, hogy eleve az a jobb ha a continue-kat és a break-eket mellőzzük,
    // de számomra így érthetőbb a program ránézésre, ami vélményem szerint
    // fontosabb mint az általános dizájnelvek.
    if (forras[i] == ' ' && (forras[i + 1] == ' ' || forras[i - 1] == ' ')) {
      continue;
    }
    cel[cel_hossz] = forras[i];
    cel_hossz++;
  }
  cel[cel_hossz] = '\0';
}

int main(void) {
  char forras[20] = "  hello, mizu?   ", cel[20];
  trim(forras, cel);
  printf("%s", cel);
  return 0;
}
