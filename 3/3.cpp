#include<iostream>
#include<cmath>

int main()
{
  int primes[563546];
  primes[0] = 2; primes[1] = 3; primes[2] = 5;
  int count = 3;
  uint64_t number = 317584931803;
  int greatest = 5;
  bool isPrime;
  for(int i = 6; i < 563546; i++)
  {
    isPrime = true;
    for(int j = 0; j < count; j++)
      if(i % primes[j] == 0) isPrime = false;
    
    if(isPrime)
    {
      primes[count] = i;
      /*      std::cout << "Prime: " << i << std::endl; */
      count++;
      if(number % i == 0) greatest = i;
    }
  }

  std::cout << primes[count-1] << std::endl;
  
  return 0;
}
