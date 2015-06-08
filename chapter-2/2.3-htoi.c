#include <stdio.h>
#include <math.h>

int htoi (char s[], int s_size)
{
  int i, value, mul;
  value = 0;
  for (i = s_size - 1; i >= 0; i--) {
    mul = (int) pow(16, s_size - i - 1);
    if (s[i] >= '0' && s[i] <= '9')
      value += (s[i] - '0') * mul;
    if (s[i] >= 'A' && s[i] <= 'F')
      value += (s[i] - 'A' + 10) * mul;
    if (s[i] >= 'a' && s[i] <= 'f')
      value += (s[i] - 'a' + 10) * mul;
  }
  return value;
}

int main ()
{
  char str[] = "100";
  int val = htoi(str, sizeof(str) - 1);
  printf("Number #1 (256): %d\n", val);

  char str1[] = "777";
  int val2 = htoi(str1, sizeof(str1) - 1);
  printf("Number #2 (1911): %d\n", val2); // 1911

  char str2[] = "12345";
  int val3 = htoi(str2, sizeof(str2) - 1);
  printf("Number #3 (74565): %d\n", val3); // 74565
}
