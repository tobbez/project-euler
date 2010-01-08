#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int counter = 0;
  long long triangle = 0;
  int i, factors;
  while(1)
  {
    ++counter;
    triangle += counter;
    
    factors = 0;
    for(i = 1; i <= sqrt(triangle); ++i)
      if(triangle % i == 0) factors += 2;
    if(factors > 500) break;
  }

  printf("\nthe number is: %li\n",triangle);
  return 0;
}
