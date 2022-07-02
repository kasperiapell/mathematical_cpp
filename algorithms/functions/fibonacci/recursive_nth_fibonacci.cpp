// recursive_nth_fibonacci.cpp

// Computes the nth term in the Fibonacci sequence

int F (int n) {
  if (n <= 1) {
    return 1;
  } else {
    return (F(n-1) + F(n-2));
  }
}
