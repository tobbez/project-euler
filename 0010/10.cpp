#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  vector<int> p;
  p.push_back(2);
  
  int current = 3;
  long long sum = 2;
  while (current < 2000000)
  {
    int currentOldPrime = 0;
    int threshold = static_cast<int>(sqrt(current));
    
    while(p.at(currentOldPrime) < threshold)
    {
      if(current % p.at(currentOldPrime) == 0)
        break;
      currentOldPrime++;
    }
    
    if(current % p.at(currentOldPrime) != 0)
    {
      p.push_back(current);
      sum += current;
      /*      cout << current << "\t" << sum << endl; */
    }
    current++;
  }
  
  cout << "sum: " << sum << endl;
}
