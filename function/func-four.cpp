#include <iostream>
using namespace std;

// Your Function Here
// default value
int calculation(int a, int b = 50, int c = 150)
{
  return a + b + c;
}

int main()
{
  cout << calculation(50, 100, 150) << "\n"; // 300
  cout << calculation(100, 50) << "\n";      // 300
  cout << calculation(100) << "\n";          // 300
  return 0;
}