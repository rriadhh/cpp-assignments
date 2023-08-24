#include <iostream>
using namespace std;

int sumall(int num[], int numsize, int noneed)
{
  int result = 0;
  for (int i = 0; i < numsize; i++)
  {
    if (num[i] == noneed)
      continue;
    else
      result += num[i];
  }
  return result;
}
int main()
{
  int numbers[] = {13, 20, 3, 30, 5, 7, 40, 13}; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";
  return 0;
}