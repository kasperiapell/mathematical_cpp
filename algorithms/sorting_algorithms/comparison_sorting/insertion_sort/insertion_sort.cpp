// insertion_sort.cpp

void insertion_sort_0 (int a [], int length) {
  int n, m, x;

  for (n = 1; n < length; n++) {
    for (m = n; m > 0; m--) {
      x = a[m];
	
      if (a[m-1] > x) {
	a[m] = a[m-1];
	a[m-1] = x;
      }
    }
  }
}

// moving the conditional in the inner loop specification
void insertion_sort_1 (int a[], int length) {
  int n, m, x;

  for (n = 1; n < length; n++) {
    for (m = n; m > 0 && a[m-1] > x; m--) {
      x = a[m];

      a[m] = a[m-1];
      a[m-1] = x;
    }
  }
}

// moving the stored variable outside the loop
void insertion_sort_2 (int a [], int length) {
  int n, m, x;

  for (n = 1; n < length; n++) {
    x = a[n];
    for (m = n; m > 0 && a[m-1] > x; m--) {
      a[m] = a[m-1];
    }
    a[m] = x;
  }
}
