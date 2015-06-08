#include <stdio.h>

int main() {
  int i, lim = 100;
  char c;
  char s [100];
  for (i = 0; i < lim - 1; ++i) {
    c = getchar();
    if (c) {
      if (c != EOF) {
        s[i] = c;
        printf("\noutput: %s", s);
      }
    }
  }
}
