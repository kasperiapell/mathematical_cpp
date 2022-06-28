// bubble_sort_unittest.cpp




// selection_sort.cpp
#include <iostream>

void selection_sort (int a [], int length) {
  int n, m, x;

  for (n=0; n<=length; n++) {
    int least = n;
    for (m=n; m<=length; m++) {
      if (a[m]<a[least]) {
	least = m;
      }
    }
    if (n != least) {
      x = a[least];
      a[least] = a[n];
      a[n] = x;
    }
  }
}












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

void quicksort (int a [], int m, int M) {
  int p;
  
  if (m < M) {
    p = partition(a, m, M);
    quicksort(a, m, p - 1);
    quicksort(a, p + 1, M);
  }
}