#include <stdio.h>

char* lower(char str[])
{
  int i;
  for (i = 0; str[i] != '\0'; ++i) {
    str[i] = ('A' <= str[i] && str[i] <= 'Z') ? str[i] - 'A' + 'a' : str[i];
  }
  return str;
}

int main()
{

  char s1[] = "ABC";
  printf("%s\n", lower(s1));

  char s2[] = "ZDS";
  printf("%s\n", lower(s2));

  char s3[] = "aaaaaaaaaaaaaaaabbBbc";
  printf("%s\n", lower(s3));
}

