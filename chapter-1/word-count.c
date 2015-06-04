#include <stdio.h>

#define IN 1 // Inside a word
#define OUT 2 // outside a word

main() {
  int number_of_words, inside_a_word, c;

  number_of_words = 0;
  inside_a_word = OUT;
  while((c = getchar()) != EOF)
    if (c != '\n' && c != '\t' && c != ' ') {
      if (inside_a_word == OUT)
        number_of_words++;
        inside_a_word = IN;
    } else {
      inside_a_word = OUT;
    }
  printf("%d\n", number_of_words);
}
