#include <stdio.h>
#define MAXLEN 100;

void escape(char str_copy[], char str_source[])
{
  int i = 0, j = 0;

  while (str_source[i] != '\0') {
    switch(str_source[i]) {
      case '\t':
        str_copy[j++] = '\\';
        str_copy[j++] = 't';
        i++;
        break;
      case '\n':
        str_copy[j++] = '\\';
        str_copy[j++] = 'n';
        i++;
        break;
      default:
        str_copy[j++] = str_source[i++];
        break;
    }
  }
  str_copy[j++] = '\0';
}

void test_string (char str_source[])
{
  char str_copy[100];
  printf("+ %s\n", str_source);
  escape(str_copy, str_source);
  printf("\n+%s\n", str_copy);
}

int main()
{
  test_string("abad\tsfasd \nwow\t.");
}
