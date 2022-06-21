// exchange_sort.cpp

void exchange_sort (int a[], int length) {
  int n, m, x;
  
  for (n = 0; n < length - 1; n++) {
    for (m = n + 1; m <= length; m++) {
      x = a[n];
	
      if (x > a[m]) {
	a[n] = a[m];
        a[m] = x;
      }
    }
  }
}
