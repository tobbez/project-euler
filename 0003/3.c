#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
  long long number = 600851475143;
  int latest = 0;

  while(number > 1) {
    ++latest;
    if(number % latest == 0)
      number /= latest;
  }
  printf("%li\n", latest);
  return 0;
}
