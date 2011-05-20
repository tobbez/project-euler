#include <stdio.h>
#include <stdlib.h>

long long tri (long long i)
{
  return i * (i + 1) / 2;
}

long long pent (long long i)
{
  return i * (3*i - 1) / 2;
}

long long hex (long long i)
{
  return i * (2*i - 1);
}

struct kv {
  long long k;
  long long v;
};

int kv_min_val_index (struct kv kvs[])
{
  int min_index = 0;
  for (int i = 1; i < 3; ++i) {
    if (kvs[i].v < kvs[min_index].v) {
      min_index = i;
    }
  }
  return min_index;
}

int main (int argc, char **argv)
{
  long long (*funcs[3])(long long) = { tri, pent, hex };
  struct kv vals[3] = { {285,0}, {165,0}, {143,0} };

  int min_next_index = 0;
  for (int i = 1; i < 3; ++i) {
    if ( funcs[i](vals[i].k+1) < funcs[min_next_index](vals[min_next_index].k+1)) {
      min_next_index = i;
    }
  }
  vals[min_next_index].k++;

  for (int i = 0; i < 3; ++i) {
    vals[i].v = funcs[i](vals[i].k);
  }

  while(!(vals[0].v == vals[1].v && vals[1].v == vals[2].v)) {
    int min_index = kv_min_val_index(vals);
    vals[min_index].v = funcs[min_index](++vals[min_index].k);
  }
  printf("%lli\n", vals[0].v);
  return 0;
}
