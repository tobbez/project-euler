#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int div_sums[28124];
  int a_numbers[28124];
  int i, j, tmp;

  for (i = 0; i < 28124; ++i) /* not doing this makes it slower */
  {
    a_numbers[i] = 0;
  }

  for(i = 2; i <= sqrt(28124); ++i)
  {
    for(j = 2 * i; j < 28124; j += i)
       div_sums[j] += i;
  }

  /*  printf("checking what numbers are abundant\n"); */  
  for(i = 0; i < 28124; ++i)
    if(div_sums[i] > i) {a_numbers[i] = 1; break;} 

  /*  printf("calculating sum\n"); */
  for(i = 1, tmp = 0; i < 28124; ++i)
  {
    for(j = 1; j < i/2; ++j)
      if(a_numbers[j] && a_numbers[i-j]) { j = -1; break; }

    if(j != -1) tmp += i;
  }

  printf("sum: %i\n", tmp);
  
  return 0;
}
