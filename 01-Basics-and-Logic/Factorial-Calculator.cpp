#include <iostream>
using namespace std;
int main()
{

  int number;
  double factorial = 1;
  cout << " Enter positive number: ";
  cin >> number;
  while (number < 0)
  {
    cout << " Enter positive number only: ";
    cin >> number;
  }

  for (int i = 1; i <= number; i++)
  {
    factorial = factorial * i;
  }
  cout << " Factorial= " << factorial << "\n";

  return 0;
}
