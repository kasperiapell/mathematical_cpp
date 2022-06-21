// bubble_sort.cpp

void bubble_sort_brute (int a[], int length)
{
  int n, m, x;
  
  for (n=0; n<length-1; n++) {
    for (m=0; m<length-1; m++) {
      x = a[m];
    
      if (x > a[m+1]) {
	a[m] = a[m+1];
        a[m+1] = x;
      }
    }
  }
}

void bubble_sort (int a[], int length)
{
  int n, m, x;
  
  for (n=0; n<length-1; n++) {
    // The second iterand does not need to go through all n components
    for (m=0; m<length-n-1; m++) {
      x = a[m];
    
      if (x > a[m+1]) {
	a[m] = a[m+1];
        a[m+1] = x;
      }
    }
  }
}

void bubble_sort_optimised (int a[], int length)
{
  int n, m, x;
  bool swapped = false;
  
  for (n=0; n<length-1; n++) {
    // The second iterand does not need to go through all n components
    for (m=0; m<length-n-1; m++) {
      x = a[m];
    
      if (x > a[m+1]) {
	a[m] = a[m+1];
        a[m+1] = x;
	swapped = true;
      }
    }

    // If no components were swapped on the first round, the array is already sorted
    if (swapped == false) { break; }
  }
}

