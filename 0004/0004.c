#include <stdio.h>
#include <string.h>

inline int palindromic (char *s) {
  int i;

  for (i = 0; i < strlen(s) / 2; ++i) {
    if (s[i] != s[strlen(s) - i - 1]) return 0;
  }

  return 1;
}

int main (int argc, char **argv)
{
  int a, b, n, largest;
  char s[7];

  largest = 0;

  for (a = 1; a < 1000; ++a) {
    for (b = a; b < 1000; ++b) {
      n = a * b;

      if(n > largest) {
        sprintf (s, "%i", n);
        if (palindromic(s)) largest = n;
      }
    }
  }

  printf("largest palindromic number: %i\n", largest);

  return 0;
}
