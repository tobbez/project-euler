#include <stdio.h>
#include <math.h>

int main (int argc, char **argv) {
  int primes[20], primecount, i, j, k, l;
  int primeexps[20];

  for(i = 0; i < 20; ++i) {
    primeexps[i] = 0;
  }

  primes[0] = 2; primecount = 1;
  for(i = 3; i < 21; ++i) {
    for(j = 0; j < primecount; ++j) {
      if(i % primes[j] == 0) break;
    }

    if(j == primecount) primes[primecount++] = i;
  }

  for(i = 1; i < 21; ++i) {
    k = i;
    for(j = 0; j < primecount && k != 1; ++j) {
      l = 0;
      while(k % primes[j] == 0) {
        k /= primes[j];
        ++l;
      }
      if(primeexps[j] < l) primeexps[j] = l;
    }
  }

  k = 1;
  for(i = 0; i < primecount; ++i) {
    k *= pow(primes[i], primeexps[i]);
  }

  printf("answer: %i\n", k);
  return 0;
}
