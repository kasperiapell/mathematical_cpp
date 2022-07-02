// array_length_brute.cpp
#include <iostream>

int fibonacci (int n, int m, int k, int h) {
  if (h == k) {
    return (n + m);
  } else {
    fibonacci(n + m, n);
  }
}

int main () {
  int n = 1;
  int m = 1;
  int k = 5;
  int h = 0;
  int x;

  x = fibonacci(1, 1, 5, 0);
  std::cout << x;
}
