#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int square_of_sum = 0;
  int sum_of_square = 0;
  int i;

  for (i = 1; i <= 100; ++i) {
    square_of_sum += i;
    sum_of_square += i * i;
  }
  square_of_sum *= square_of_sum;

  printf("%i\n", abs(sum_of_square - square_of_sum));
  return 0;
}
