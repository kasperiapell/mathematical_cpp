// prime_test_brute_improved_search_space.cpp
#include <iostream>
#include <cmath>

bool is_prime (int p)
{
  int n = 2;

  // If p is 1, it is not prime
  if (p == 1) { return false; }
  else
  {
    // One could scour all n which satisfy n < p. However, we have:
    // Theorem: if n divides p and n != p, then n \leq \sqrt(p)
    // Proof: if n >= sqrt(p) and n * 1 != p, then p 
    // Thus, we can focus on n such that n <= sqrt(p)
    while (n <= sqrt(p))
    {
      if (p % n == 0)
      {
	// n divides p, so p is not prime
	return false;
	break;
      }
      else
      {
	 n = n + 1;
      }
    }

    // If this is reached, none of the n divided p
    return true;
  }
}
