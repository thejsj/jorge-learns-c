#include <stdio.h>
#define MAXLINE 1000 /* maximum line length */

int len; // current line length
int max; // maximum length so far
char line[MAXLINE]; // curent input line
char longest[MAXLINE]; // longest line save here

int getlinelength(void);
void copy(void);

/* print the longest line */
int main() {
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = getlinelength()) > 0)
    if (len > max) {
      max = len;
      copy();
    }
  if (max > 0) // there was a line
    printf("\nLongest:\n%s", longest);
  return 0;
}

/* read a line into s, return length */
int getlinelength() {
  extern char line[];

  int c, i;
  for (i = 0; i < MAXLINE-1 && (c = getchar())!=EOF && c!='\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';

  return i;
}

/* copy: copy 'from' into 'to'; assume it is big enough */
void copy() {
  int i;
  extern char line[], longest[];

  i = 0;
  while((longest[i] = line[i]) != '\0')
   ++i;
}
