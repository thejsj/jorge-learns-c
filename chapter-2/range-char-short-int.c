#include <stdio.h>

int main() {

  int num_int = 1;
  int valid = 1;

  while (valid) {
    if ((num_int * 10) % 10 == 0) {
      num_int = num_int * 10;
    } else {
      valid = 0;
    }
  }
  printf("num_int: %d\n", num_int);

  short num_short = 1;
  short possible_new_short = 1;
  valid = 1;

  while (valid) {
    possible_new_short = num_short * 10;
    if (possible_new_short % 10 == 0) {
      num_short = possible_new_short;
    } else {
      valid = 0;
    }
    if (num_short == 0) {
      valid = 0;
    }
  }
  printf("num_short: %d\n", num_short);

  long num_long = 1;
  valid = 1;

  while (valid) {
    if ((num_long * 10) % 10 == 0) {
      valid = 1;
      num_long = num_long * 10;
    } else {
      valid = 0;
    }
  }
  printf("num_long: %lu\n", num_long);

  /*double num_double = 1;*/
  /*valid = 1;*/

  /*while (valid) {*/
    /*if ((num_double * 10.0) % 10.0 == 0.0) {*/
      /*valid = 1;*/
      /*num_double = num_double * 10;*/
    /*} else {*/
      /*valid = 0;*/
    /*}*/
  /*}*/
  /*printf("num_double: %f\n", num_double);*/
}
