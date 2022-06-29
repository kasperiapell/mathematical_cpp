// binary_search.cpp
#include <math.h>

/*
  The function binary_search takes in as arguments a sorted array,
  the length of the sorted array, and the value to be
  searched. The function returns the index at which it finds
  the value to be searched. If the value to be searched does not
  exist on the array, a value of -1 is returned.
*/

int binary_search(double array [], int length, double x) {
  int bot = 0;
  int top = length;
  int F;

  while (bot <= top) {
    F = floor((bot + top) / 2);

    if (array[F] < x) {
      bot = F + 1;
    } else if (array[F] > x) {
      top = F - 1;
    } else {
      return F;
    }
  }
  return -1;
}
