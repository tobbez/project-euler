#include <cstdio>
#include <cmath>

int main()
{
  for(int b = 0; b <= 1000; b++)
  {
    for(int a = 0; a < b; a++)
    {
      int cs = a*a + b*b;
      int c = (int)sqrt(cs);
      if(cs % c == 0 && c * c == cs && a+b+c == 1000 && b < c)
      {
	printf("a: %i; b: %i; c: %i; sum: %i\n", a, b, c, a*b*c);
        break;
      }
    }
  }
  return 0;
}
