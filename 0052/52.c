#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int equal_nums (char *a, char *b)
{
  if (strlen(a) != strlen(b)) return 0;

  int eq = 1;
  for (int i = 0; i < 10; ++i) {
    int acnt = 0, bcnt = 0;
    for (unsigned int j = 0; j < strlen(a); ++j) {
      acnt += a[j] - '0' == i;
      bcnt += b[j] - '0' == i;
    }
    if (acnt != bcnt) {
      eq = 0;
      break;
    }
  }
  return eq;
}

int main (int argc, char **argv)
{
  int i = 1;

  while (1) {
    int eq = 1;
    char *s1 = malloc(snprintf(NULL, 0, "%i", i)+1);
    sprintf(s1, "%i", i);

    for (int j = 2; j < 7; ++j) {
      char *st = malloc(snprintf(NULL, 0, "%i", i*j)+1);
      sprintf(st, "%i", i*j);
      if (!equal_nums(s1, st)) {
        eq = 0;
        break;
      }
      free(st);
    }
    free(s1);

    if (eq) {
      printf("%i\n", i);
      break;
    }
    ++i;
  }
  return 0;
}
