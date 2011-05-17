#include <iostream>
#include <string>
#include <list>
#include <sstream>
#include <algorithm>

using namespace std;

string itos(int i) 
{
  stringstream ss;
  ss << i;
  return ss.str();
}

int stoi(const string &s)
{
  stringstream ss;
  int i;
  ss << s;
  ss >> i;
  return i;
}

int main (int argc, char **argv)
{
  int parr[1000000];
  list<int> primes;

  for (int i = 2; i < 1000000; ++i) {
    parr[i] = (i-1) % 2;
  }
  parr[2] = 0;
  primes.push_back(2);

  for (int i = 3; i < 1000000; i += 2) {
    if (!parr[i]) {
      primes.push_back(i);
      for (int j = i * 2; j < 1000000; j += i) {
        parr[j] = 1;
      }
    }
  }

  int count = 0;
  for (list<int>::iterator it = primes.begin(); it != primes.end(); ++it) {
    string s; unsigned int j;
    int p = 1;
    for (s = itos(*it), j = 0; j < s.size(); rotate(s.begin(), s.begin()+1, s.end()), ++j) {
      if (parr[stoi(s)]) {
        p = 0;
        break;
      }
    }
    count += p;
  }
  
  cout << count << endl;

  return 0;
}
