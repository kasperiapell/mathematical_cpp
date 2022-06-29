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





An idea which can be used once is a trick. If it can be used more than once it becomes a method.