#include <iostream>
using namespace std;
double toFahrenheit(double value);
double toMiles(double value);
int main()
{
  int choice;
  double value;
  do
  {
    cout << "1. Convert Celsius to Fahrenheit\n";
    cout << "2. Convert Kilometers to Miles\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "Enter the value: ";
      cin >> value;
      cout << "Result: " << toFahrenheit(value) << "\n";
      break;
    case 2:
      cout << "Enter the value: ";
      cin >> value;
      cout << "Result: " << toMiles(value) << "\n";
      break;
    case 0:
      cout << "Thank you for using the converter. Goodbye!\n";
      break;
    default:
      cout << "Invalid choice! Please select 0, 1, or 2.\n";
      break;
    }
  } while (choice != 0);

  return 0;
}
double toFahrenheit(double x)
{
  return (x * 9.0 / 5.0) + 32.0;
}
double toMiles(double y)
{
  return y * 0.621371;
}
