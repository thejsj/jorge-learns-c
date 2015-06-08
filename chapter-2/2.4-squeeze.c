#include <stdio.h>

void squeeze (char s1[], char s2[])
{
  int i, j, ii, found;

  for (i = j = 0; s1[i] != '\0'; i++) {
    found = 0;
    for (ii = 0; s2[ii] != '\0'; ii++) {
      if (s1[i] == s2[ii]) {
        found = 1;
      }
    }
    if (!found) {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}

int main ()
{
  char s[] = "abc";
  squeeze(s, "b");
  printf("%s\n", s);

  char s2[] = "abbbc";
  squeeze(s2, "b");
  printf("%s\n", s2);

  char s3[] = "ababbaca";
  squeeze(s3, "ba");
  printf("%s\n", s3);
}
