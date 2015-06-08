#include <stdio.h>

int any(char s1[], char s2[])
{
  int i, ii, found;
  for (i = 0; s1[i] != '\0'; i++) {
    for (ii = 0; s2[ii] != '\0'; ii++) {
      if (s1[i] == s2[ii])
        return i;
    }
  }
  return -1;
}

int main ()
{
  char s1[] = "hello";
  int location1 = any(s1, "");
  printf("-1: %d\n", location1);

  int location2 = any(s1, "e");
  printf("1: %d\n", location2);

  int location3 = any(s1, "ollo");
  printf("2: %d\n", location3);
}


