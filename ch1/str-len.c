#include <stdio.h>
#include <string.h>

int _strlen(char str[]);

int main()
{
  int count1;
  int count2;
  char str1[] = "hello world";

  count1 = _strlen(str1);
  count2 = strlen(str1);

  printf("%d\n", count1);
  printf("%d\n", count2);

  return 0;
}

int _strlen(char str[]) {
  int count;

  while (str[count] != '\0') {
    ++count;
  }
  return count;
}
