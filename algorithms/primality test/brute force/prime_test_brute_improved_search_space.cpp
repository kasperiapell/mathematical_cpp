// prime_test_brute_improved_search_space.cpp
#include <iostream>
#include <cmath>

bool is_prime (int p)
{
  int n = 2;
  
  if (p == 1) { return false; }
  else
  {
    std::cout << "Dividing " << p << " by ";

    // One could scour all n which satisfy n < p. However, we have:
    // Theorem: if n divides p and n != p, then n \leq \sqrt(p)
    // Proof: if n >= sqrt(p) and n * 1 != p, then p 
    // Thus, we can focus on n such that n <= sqrt(p)
    while (n <= sqrt(p))
    {
      std::cout << n << "... ";

      if (p % n == 0)
      {
	std::cout << n << " divides " << p << ".\n";
	return false;
	break;
      }
      else
      {
	 n = n + 1;
      }
    }

    std::cout << "None of them divide " << p << ".\n";
    return true;
  }
}

int main ()
{
  int p;
  bool b;
  
  do
  {
    std::cout << "Enter a positive integer (0 to exit): ";
    std::cin >> p;
    b = is_prime(p);

    if (b == true) { std::cout << p << " is prime!\n"; }
    else { std::cout << p << " is not prime.\n"; }
    } while (p != 0);

  return 0;
}
