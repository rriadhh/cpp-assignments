#include <iostream>
#include <cctype>
using namespace std;

// Write Your Function Here
string swapping(string a)
{
  int sizee = size(a);
  for (int i = 0; i < sizee; i++)
  {
    if (a[i] == 'h' || a[i] == 'H')
    {
      continue;
    }
    else if (isspace(a[i]))
    {
      continue;
    }
    else if (isupper(a[i]))
    {
      a[i] = tolower(a[i]);
    }
    else if (islower(a[i]))
    {
      a[i] = toupper(a[i]);
    }
  }
  return a;
}

int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}