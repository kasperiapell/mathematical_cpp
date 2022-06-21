// exchange_sort.cpp
#include <iostream>

void exchange_sort (int a[], int length)
{
  int n, m, x, y;
  
  for (n=0; n<length-1; n++) {
    for (m=n+1; m<=length; m++) {
      x = a[n];
      y = a[m];
    
      if (x > y) {
	a[n] = y;
        a[m] = x;
      }
    }
  }
}
