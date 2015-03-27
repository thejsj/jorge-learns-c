#include <stdio.h>
#define MAXLINE 1000 /* maximum line length */

int getlinelength(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest line */
int main() {
  int len; // current line length
  int max; // maximum length so far
  char line[MAXLINE]; // curent input line
  char longest[MAXLINE]; // longest line save here

  max = 0;
  while ((len = getlinelength(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0) // there was a line
    printf("%s", longest);
  return 0;
}

/* read a line into s, return length */
int getlinelength(char line[],int maxline) {
  int c, i;
  for (i = 0; i < maxline-1 && (c = getchar())!=EOF && c!='\n'; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';

  return i;
}

/* copy: copy 'from' into 'to'; assume it is big enough */
void copy(char to[], char from[]) {
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0')
   ++i;
}
