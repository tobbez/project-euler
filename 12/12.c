#include <stdio.h>
#include <stdlib.h>


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
    for(i = 1; i <= triangle; ++i)
      if(triangle % i == 0) ++factors;
    if(factors > 500) break;
    
    //if(counter % 500 == 0)
    /*    printf("%i:%li:%i\n", counter, triangle, factors); */
    
  }
  printf("\nthe number is: %li\n",triangle);
  return 0;
}
