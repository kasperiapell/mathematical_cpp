// recursive_factorial.cpp

unsigned long factorial (unsigned long  n)
{
  if (n <= 1)
    return 1;
  else
    return (n * factorial(n - 1));
}

