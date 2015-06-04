#include <stdio.h>

int atoi(char str[]);

int main()
{
  printf("%d\n", atoi("12345"));
  printf("%d\n", atoi("345"));
  printf("%d\n", atoi("34aaa5"));
  return 0;
}

int atoi(char str[])
{
  int i, n;

  for(i = 0; str[i] >= '0' && str[i] <= '9'; ++i) {
    n = 10 * n + (str[i] - '0');
  }

  return n;
}
