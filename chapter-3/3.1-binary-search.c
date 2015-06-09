#include <stdio.h>

int binsearch(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }
  mid = (low + high) / 2;
  if (x == v[mid])
    return mid;
  return -1;
}

int main ()
{
  int x1, arr1size = 10, arr1[arr1size], i, result1;
  for (i = 0; i < 10; i++)
    arr1[i] = i * 2;
  x1 = 3;
  result1 = binsearch(x1, arr1, arr1size);
  printf("Result: %d, %d", result1, arr1size);
}
