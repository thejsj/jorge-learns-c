#include <stdio.h>

char* lower(char str[]);

int main()
{
  printf("%s", lower("ABC"));
  printf("%s", lower("ZDS"));
  return 0;
}

char* lower(char str[])
{
  int i;
  for (i = 0; str[i] != '\0'; ++i) {
    if ('A' <= str[i] && str[i] <= 'Z') {
      str[i] = str[i] + 'a' - 'A';
    }
  }
  return str;
}
