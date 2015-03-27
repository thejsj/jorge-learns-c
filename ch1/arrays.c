#include <stdio.h>
/**
 * Provides a count of digits, white space and other chars
 */
main () {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;

  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9') // Checks if this is a digit between 0 and 9
      // Why does it need to do this?
      // Why does this cast the char into an int?
      // Oh, right! Because chars are ints in C, so it's substracting the int
      // value of '0' (48) with the int value of the char
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;

  printf("digits = ");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other %d\n", nwhite, nother);
}
