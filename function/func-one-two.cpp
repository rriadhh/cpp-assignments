#include <iostream>
using namespace std;
// التكليف 01
int calcspecial(int a, int b)
{
  return (a == b) ? a + b : ((a > b) ? a - b : b - a);
}
// التكليف 02
float money(float a, int days)
{
  days = days - ((days / 7) * 2);
  return a / days;
}

int main()
{
  int a, b;
  cout << " a = ? & b = ?\n";
  cin >> a >> b;
  cout << calcspecial(a, b) << "\n";
  /*
    Hints
    21 Days Has 3 "Weeks"
    Every "Week" You Have 2 Holidays.
    Total = 3 * 2 = 6 Holidays From 21 Days
  */
  cout << money(2015, 21) << "\n"; // 134.333
  cout << money(4500, 40) << "\n"; // 150
  return 0;
}