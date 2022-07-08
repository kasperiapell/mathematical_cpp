// recursive_euclidean_algorithm.cpp

int gcd (int a, int b) {
  if (a > b)
    return gcd(a - b, b);
  else if (b > a)
    return gcd(a, b - a);
  else
    return a;
}
