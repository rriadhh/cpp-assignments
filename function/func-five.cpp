#include <iostream>
using namespace std;

// Write Your Function Here
int thepower(int a, int b)
{
  int result = a;
  for (int i = 1; i < b; i++)
  {
    result *= a;
  }
  return result;
}

int main()
{
  cout << thepower(2, 5); // 32
  return 0;
}