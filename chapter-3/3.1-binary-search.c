#include <stdio.h>

int binsearch(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  // Stop when the low and high index are the same
  while (low <= high) {
    // Set the new mid index
    mid = (low + high) / 2;
    // Check if the mid index is under our value
    // Split the tree in half
    if (x < v[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }
  // Discard mid value
  // Use sum of low and high divided by 2
  mid = (low + high) / 2;
  if (x == v[mid])
    return mid;
  return -1;
}

int binsearch_test(int x, int limit, int interval)
{
  int x1, arr1size = limit, arr1[arr1size], i, result1;
  for (i = 0; i < limit; i++)
    arr1[i] = i * interval;
  result1 = binsearch(x, arr1, arr1size);
  printf("result: %d, %d, %d\n", x, result1, arr1size);
  return result1;
}

int main ()
{
  binsearch_test(3, 10, 2);
  binsearch_test(2, 10, 2);
  binsearch_test(4, 10, 2);
  binsearch_test(6, 10, 2);
  binsearch_test(0, 10, 2);
  binsearch_test(16, 20, 2);
  binsearch_test(24, 100, 2);
  binsearch_test(25, 100, 2);
  binsearch_test(26, 100, 2);
  binsearch_test(500, 1000, 1);
}
