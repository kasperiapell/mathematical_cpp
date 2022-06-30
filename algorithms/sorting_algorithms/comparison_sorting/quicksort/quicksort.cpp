// quicksort.cpp
#include <iostream>

void swap (int *i, int *j) {
  int x = *i;

  *i = *j;
  *j = x;
}

int partition (int array [], int m, int M) {
  int pivot = array[M];
  int x;
  int i = m - 1;

  for (int j = m; j < M; j++) {
    if (array[j] <= pivot) {
      i = i + 1;
      swap(&array[i], &array[j]);
    }
  }
  
  swap(&array[i+1], &array[M]);
  return i + 1;
}

void quicksort (int array [], int m, int M) {
  int p;
  
  if (m < M) {
    p = partition(array, m, M);
    quicksort(array, m, p - 1);
    quicksort(array, p + 1, M);
  }
}
