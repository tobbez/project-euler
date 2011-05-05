#include <stdio.h>
#include <stdlib.h>

int vals[8] = { 1, 2, 5, 10, 20, 50, 100, 200 };


int get_val (int arr[8])
{
  int sum = 0;

  for (int i = 0; i < 8; ++i) {
    sum += arr[i] * vals[i];
  }

  return sum;
}

int count_up (int arr[8])
{
  arr[0]++;
  for (int i = 0; i < 7; ++i) {
    if (arr[i] > 200 || get_val(arr) > 200) {
      arr[i] = 0;
      arr[i+1]++;
    }
  }

  return arr[7] <= 200;
}

int main (int argc, char **argv)
{
  int mults[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
  int times = 0;

  while (count_up(mults)) {
    if (get_val(mults) == 200) {
      times++;
    }

    /*
    if (times % 200 == 0) {
      for (int i = 0; i < 8; ++i) {
        printf("%3i ", mults[i]);
      }
      printf("\t%i\n", times);
    }
    */
  }

  printf("%i\n", times);

  return 0;
}
