// swap_array_elements.cpp

void swap (int *i, int *j) {
  int l = *i;

  *i = *j;
  *j = l;
}

// Given int array [] = { 1, 2, 3 };
// we can call swap(&array[0], &array[1]);
// which modifies array to { 2, 1, 3 }
