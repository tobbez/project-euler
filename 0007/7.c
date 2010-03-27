#include <stdio.h>
#include <math.h>

int main(void)
{
  int primes[10001];
  int count;
  int i;

  primes[0] = 2;
  count = 1;
  i = 3;

  while (count != 10001) {
    int j;
    for (j = 0; primes[j] <= sqrt(i); ++j) {
      if (i % primes[j] == 0) break;
    }
    if (primes[j] > sqrt(i)) primes[count++] = i;
    i += 2;
  }

  printf("%i\n", primes[count-1]);
  return 0;
}
