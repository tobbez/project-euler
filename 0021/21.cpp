#include<iostream>

int sum_div(int input)
{
  int sum = 0;
  for(int i=1; i<= input/2;i++)
  {
    if (input % i == 0) sum += i;
  }
  return sum;
}

int main()
{
  int tmp;
  int sum = 0;
  for(int i=1; i<10000; i++)
  {
    tmp = sum_div(i);
    if(tmp != i && sum_div(tmp) == i) 
    {
      /*      std::cout << "found pair: " << i << ":" << tmp << std::endl; */
      sum += i;
    }
  }
  std::cout << "final answer: " << sum << std::endl;
  
  return 0;
}
