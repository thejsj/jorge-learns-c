#include <stdio.h>
#include <math.h>

int main()
{
  printf("%f\n", sqrt(4));
  printf("%f\n", sqrt(4.0));
  printf("%d\n", sqrt(4)); // prints 512
  printf("%d\n", sqrt(4)); // prints 768
  printf("%d\n", sqrt(4)); // prints 1024
  printf("%d\n", (int) sqrt(4)); // prints 4
  printf("%f\n", sqrt(16));
  return 0;
}
