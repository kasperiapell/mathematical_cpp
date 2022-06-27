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