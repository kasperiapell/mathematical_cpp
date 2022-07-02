// array_max_brute.cpp
// Returns the index of the maximum element in a nonempty array

int array_max_brute (int array [], int length) {
  int max = 0;

  for (int n = 1; n <= length; ++n) {
    if (array[n] > array[max]) {
      max = n;
    }
  }

  return max;
}
