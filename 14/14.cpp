#include <cstdio>

int main()
{
  int most_terms = 0;
  long most_terms_starting = 1;
  for(int i = 1; i < 1000000; i++)
  {
    int terms = 1;
    long long j = i;
    while(j != 1)
    {
      terms++;
      /*      printf("%i\t%lli\t%i\n", i, j, terms); */
      if(j % 2 == 0)
      {
	j = j / 2;
      }
      else
      {
	j = j * 3 + 1;
      }
    }
    if(terms > most_terms)
    {
      most_terms = terms;
      most_terms_starting = i;
    }
  }
  printf("longest is %li with %i jumps\n", most_terms_starting, most_terms);
  return 0;
}
