// prime_test_brute.cpp
#include <iostream>

bool is_prime (int p)
{
  int n = 2;
  
  if (p == 1) { return false; }
  else
  {
    std::cout << "Dividing " << p << " by ";

    while (n < p)
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
