#include <iostream>

int main()
{
  int n1=1, n2=2;
  int sum = 2;
  int tmp;
  while(true)
  {
    tmp = n1 + n2;
    n1 = n2;
    n2 = tmp;
    if (n2 > 1000000) break;
    if (n2 % 2 == 0) sum += n2;
  }
  std::cout << sum << std::endl;
  return 0;
}
