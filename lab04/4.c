#include <stdio.h>

int main(void) {
  char name[20];
  scanf("%s", name);
  for (int i = 0; name[i] != '\0'; i++) {
    printf("%c\n", name[i]);
  }
  return 0;
}
