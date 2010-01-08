#include <stdio.h>
#include <math.h>

int primes[100000];
int non_primes[100000];

int is_prime(int x)
{
  int i;
  if(x < 3) return 0;
  else if (primes[x]) return 1;
  else if (non_primes[x]) return 0;

  for (i = 2; i <= sqrt(x); ++i)
  {
    if (x % i == 0)
    {
      non_primes[x] = 1;
      return 0;
    }
  }
  primes[x] = 1;
  return 1;
}

int main(int argc, char *argv[])
{
  int a,b,n;
  int amax,bmax,nmax;
  amax = 0; bmax = 0; nmax = -1;
  for (a = -999; a < 1000; ++a)
  {
    for (b = 1; b < 1000; b+=2)
    {
      if (!is_prime(b)) continue;
      for (n = 0; ; ++n)
      {
        if(!is_prime(n * n + a * n + b))
        {
          if(n > nmax)
          {
            amax = a;
            bmax = b;
            nmax = n;
          }
          break;
        }
      }
    }
  }

  printf("product: %i\n", amax * bmax);
  /*  printf("a = %i; b = %i; max n = %i\n", amax, bmax, nmax); */
  return 0;
}
