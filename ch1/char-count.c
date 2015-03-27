#include <stdio.h>

/**
 * Type into the screen as much as you want.
 * Press CTRL + D and see the final count
 */
int main() {
  double nc;
  for(nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}
