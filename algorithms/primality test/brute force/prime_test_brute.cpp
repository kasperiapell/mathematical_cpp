// prime_test_brute.cpp

bool is_prime (int p)
{
  int n = 2;

  // If p is 1, it is not prime
  if (p == 1) {
    return false;
  } else {
    // Check one by one whether integers smaller than p divided p
    while (n < p) {
      if (p % n == 0) {
	// n divides p, so p is not prime
	return false;
	break;
      } else {
	 n = n + 1;
      }
    }

    // If this is reached, none of the n divided p
    return true;
  }
}
