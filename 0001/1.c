#include <stdio.h>

int main(void)
{
  int sum = 0;
  int i;

  for(i = 1; i <1000; i++)
    if(i % 5 == 0 || i % 3 == 0) sum += i;
  printf("%i\n", sum);
  return 0;
}
