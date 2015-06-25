#include <stdio.h>
#include <string.h>

void expand (char source_string[])
{
  char output_string[100] = "";
  int j = 0;
  int source_len = strlen(source_string);
  for (int i = 0; i < source_len; i++) {
    if (i > 0 && source_string[i] == '-') {
      for (int ii = source_string[i - 1]; ii <= source_string[i + 1]; ii++) {
        output_string[j++] = ii;
      }
    }
  }
  output_string[j++] = '\0';
  printf(" - %s\n", source_string);
  printf(" + %s\n", output_string);
}


int main ()
{
  expand("a-z");
  expand("a-z0-9");
  expand("--9a-z0-9");
}

