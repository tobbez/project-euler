#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int counter = 0;
  long long triangle = 0;
  int i;
  while(1)
  {
    ++counter;
    triangle += counter;
    
    int factors = 0;
    for(i = 1; i <= sqrt(triangle) + 1; ++i)
      if(triangle % i == 0) factors += 2;
    if(factors > 500) break;
    
    //if(counter % 500 == 0)
    /*    printf("%i:%li:%i\n", counter, triangle, factors); */
    
  }
  printf("\nthe number is: %li\n",triangle);
  return 0;
}
