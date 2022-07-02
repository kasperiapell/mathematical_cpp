// integer_to_unsigned_power_naive.cpp

int power (int n, unsigned int k) {
  signed long int m = 1;

  for (int i = 0; i < k; ++i) {
    m = m * n;
  }

  return m;
}
